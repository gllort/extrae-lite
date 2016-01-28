#ifndef __UTILS_H__
#define __UTILS_H__

#define ASSERT(condition, message) {                      \
   if (!(condition)) {                                    \
      fprintf (stderr, "ASSERTION FAILED on %s [%s:%d]\n" \
                       "CONDITION:   %s\n"                \
                       "DESCRIPTION: %s\n",               \
               __FUNCTION__,                              \
               __FILE__,                                  \
               __LINE__,                                  \
               #condition,                                \
               message);                                  \
      exit (-1);                                          \
   }                                                      \
}

#define xmalloc(ptr,size)             \
{                                     \
   ptr = malloc(size);                \
   ASSERT (                           \
      (ptr != NULL),                  \
      "Error allocating memory."      \
   );                                 \
}

#define xrealloc(ptr,src,size)        \
{                                     \
   ptr = realloc(src, size);          \
   ASSERT (                           \
      (ptr != NULL),                  \
      "Error allocating memory."      \
   );                                 \
}

#define xfree(ptr)                    \
{                                     \
   if (ptr != NULL)                   \
   {                                  \
      free(ptr);                      \
   }                                  \
   ptr = NULL;                        \
} 


int explode (char *sourceStr, const char *delimiter, char ***tokenArray);

#endif /* __UTILS_H__ */
