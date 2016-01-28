#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <libgen.h>
#include "utils.h"

int is_Whitespace(char c)
{
  /* Avoid using isspace() and iscntrl() to remove internal dependency with ctype_b/ctype_b_loc.
 *    * This symbol name depends on the glibc version; newer versions define ctype_b_loc and compat 
 *       * symbols have been removed. This dependency may end up in undefined references when porting
 *          * binaries to machines with different glibc versions.
 *             */

   return c == ' ' || c == '\t' || c == '\v' || c == '\f' || c == '\n';
}

static char *trim (char *sourceStr)
{
  int sourceLen = 0;
  int left = 0, right = 0;
  char *retStr = NULL;
  int retLen = 0;

  if (sourceStr == NULL) return NULL;

  sourceLen = strlen (sourceStr);

  left  = 0;
  right = sourceLen - 1;

  /* Find first non-whitespace character */
  while ((left < sourceLen) && (is_Whitespace(sourceStr[left])))
    left ++;

  /* Find last character before whitespaces */
  while ((right > left) && (is_Whitespace(sourceStr[right])))
    right --;

  /* Create a new string */
  retLen = (right - left + 1) + 1; // Extra 1 for the final '\0' 
  xmalloc(retStr, retLen * sizeof(char));
  retStr = strncpy (retStr, &sourceStr[left], retLen-1);
  retStr[retLen-1] = '\0';

  return retStr;
}

int explode (char *sourceStr, const char *delimiter, char ***tokenArray)
{
   int num_tokens = 0;
   char **retArray = NULL;
   char *backupStr, *backupStr_ptr;
   char *token, *trimmed_token;

   if ((sourceStr != NULL) && (strlen(sourceStr) > 0))
   {
      /* Copy the original string to a local buffer, because strtok modifies it */
      backupStr = strdup (sourceStr);
      if (backupStr != NULL)
      {
         /* Save the original pointer for freeing later */
         backupStr_ptr = backupStr;

         /* Separate tokens by delimiter */
         while ((token = strtok(backupStr, delimiter)) != NULL)
         {
            backupStr = NULL;
            trimmed_token = trim (token);
            if (trimmed_token != NULL)
            {
               /* Save the token in a new position of the resulting vector */
               num_tokens ++;
               xrealloc(retArray, retArray, num_tokens * sizeof(char *));
               retArray[num_tokens-1] = strdup(trimmed_token);
               xfree (trimmed_token);
            }
         }
         xfree (backupStr_ptr);
      }
   }

   *tokenArray = retArray;
   return num_tokens;
}

