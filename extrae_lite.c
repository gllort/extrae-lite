#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <papi.h>
#include <time.h>
#include <mpi.h>
#include <sys/types.h>
#include <unistd.h>
#include "extrae_lite.h"
#include "utils.h"

int Rank = 0;

int            NumberOfPhases = 0;
phase_stats_t *Phases         = NULL;

int        EventSet          = PAPI_NULL;
int        NumberOfCounters  = 0;
char     **CountersRequested = NULL;
long long *CountersDiff;
long long *LastCountersRead;

unsigned long long TimeDiff = 0;
struct timespec    LastTimeRead;


static void parse_configuration()
{
  int i = 0;
  char *env_counters = NULL;

  env_counters = getenv("EXTRAE_LITE_COUNTERS");

  if (env_counters != NULL)
  {
    NumberOfCounters = explode(env_counters, ",", &CountersRequested);
  }
  else  
  {
    NumberOfCounters     = 2;
    CountersRequested    = (char **)malloc(sizeof(char *) * NumberOfCounters);
    CountersRequested[0] = (char *)"PAPI_TOT_INS";
    CountersRequested[1] = (char *)"PAPI_TOT_CYC";
  }

  CountersDiff     = (long long *)malloc(sizeof(long long) * NumberOfCounters);
  LastCountersRead = (long long *)malloc(sizeof(long long) * NumberOfCounters);

  memset(CountersDiff, 0, sizeof(long long) * NumberOfCounters);
  memset(LastCountersRead, 0, sizeof(long long) * NumberOfCounters);
}


static void read_time_and_counters()
{
  int             i = 0;
  struct timespec CurrentTime;
  long long       CurrentCounters[NumberOfCounters];

  clock_gettime(CLOCK_MONOTONIC, &CurrentTime);

  TimeDiff = ((CurrentTime.tv_sec - LastTimeRead.tv_sec) * 1000000000) + (CurrentTime.tv_nsec - LastTimeRead.tv_nsec);

  LastTimeRead.tv_sec  = CurrentTime.tv_sec;
  LastTimeRead.tv_nsec = CurrentTime.tv_nsec;

#if 0
  PAPI_read(EventSet, CurrentCounters);

  for (i=0; i<NumberOfCounters; i++)
  {
    CountersDiff[i]     = CurrentCounters[i] - LastCountersRead[i];
    LastCountersRead[i] = CurrentCounters[i];
  }
#endif

  PAPI_read(EventSet, CountersDiff);
  PAPI_reset(EventSet);
}


static void extrae_lite_new_phase(char *phase_id)
{
  Phases = (phase_stats_t *)realloc(Phases, sizeof(phase_stats_t) * (NumberOfPhases + 1));

  Phases[NumberOfPhases].id                     = strdup(phase_id);
  Phases[NumberOfPhases].number_of_mpi_calls    = 0;
  Phases[NumberOfPhases].elapsed_time_in_mpi    = 0;
  Phases[NumberOfPhases].elapsed_time_in_useful = 0;
  Phases[NumberOfPhases].counters_in_useful     = NULL;
  Phases[NumberOfPhases].counters_in_useful     = (long long *)malloc( sizeof(long long) * NumberOfCounters );
  memset(Phases[NumberOfPhases].counters_in_useful, 0, sizeof(long long) * NumberOfCounters);

  NumberOfPhases ++;
}



void extrae_lite_init()
{
  int i = 0;

  parse_configuration();

  PMPI_Comm_rank(MPI_COMM_WORLD, &Rank);

  extrae_lite_new_phase((char *)"main");

  PAPI_library_init(PAPI_VER_CURRENT);
  PAPI_create_eventset(&EventSet);

  for (i=0; i<NumberOfCounters; i++)
  {
    int EventCode;
    PAPI_event_name_to_code(CountersRequested[i], &EventCode); 
    PAPI_add_event(EventSet, EventCode);
  }
  PAPI_start(EventSet);

  read_time_and_counters();
}

void extrae_lite_init_ () { extrae_lite_init(); }
void extrae_lite_init__() { extrae_lite_init(); }
void EXTRAE_LITE_INIT  () { extrae_lite_init(); }

void extrae_lite_next_phase(char *phase_id)
{   
  int i;
    
  read_time_and_counters();
    
  Phases[NumberOfPhases-1].elapsed_time_in_useful += TimeDiff;
    
  for (i=0; i<NumberOfCounters; i++)
  {
    Phases[NumberOfPhases-1].counters_in_useful[i] += CountersDiff[i];
  }

  extrae_lite_new_phase(phase_id);
}

void extrae_lite_next_phase_ (char *phase_id) { extrae_lite_next_phase( phase_id ); }
void extrae_lite_next_phase__(char *phase_id) { extrae_lite_next_phase( phase_id ); }
void EXTRAE_LITE_NEXT_PHASE  (char *phase_id) { extrae_lite_next_phase( phase_id ); }

void extrae_lite_enter()
{
  int i = 0;

  read_time_and_counters();

  Phases[NumberOfPhases-1].number_of_mpi_calls ++;
  Phases[NumberOfPhases-1].elapsed_time_in_useful += TimeDiff;

  for (i=0; i<NumberOfCounters; i++)
  {
    Phases[NumberOfPhases-1].counters_in_useful[i] += CountersDiff[i];
  }
}

void extrae_lite_enter_ () { extrae_lite_enter(); }
void extrae_lite_enter__() { extrae_lite_enter(); }
void EXTRAE_LITE_ENTER  () { extrae_lite_enter(); }


void extrae_lite_exit()
{
  read_time_and_counters();

  Phases[NumberOfPhases-1].elapsed_time_in_mpi += TimeDiff;
}

void extrae_lite_exit_ () { extrae_lite_exit(); }
void extrae_lite_exit__() { extrae_lite_exit(); }
void EXTRAE_LITE_EXIT  () { extrae_lite_exit(); }


void extrae_lite_report()
{
  int   i  = 0;
  int   j  = 0;
  FILE *fd = NULL;
  char  file[1024];

  char  host[64];
  gethostname(host, sizeof(host));
  snprintf(file, sizeof(file), "extrae_lite_stats.%s.%d.%d", host, (int)getpid(), Rank);

  fd = fopen(file, "w");

  fprintf(fd, "Rank,Phase,Number of MPI calls,Elapsed Time in MPI,Elapsed Time in Useful,");
  for (j=0; j<NumberOfCounters; j++)
  {
    fprintf(fd, "%s", CountersRequested[j]);
    if (j < NumberOfCounters - 1) fprintf(fd, ",");
  }
  fprintf(fd, "\n");

  for (i=0; i<NumberOfPhases; i++)
  { 
    fprintf(fd, "%d,%s,%d,%llu,%llu,", Rank, Phases[i].id, Phases[i].number_of_mpi_calls, Phases[i].elapsed_time_in_mpi, Phases[i].elapsed_time_in_useful);

    for (j=0; j<NumberOfCounters; j++)
    {
      fprintf(fd, "%llu", Phases[i].counters_in_useful[j]);
      if (j < NumberOfCounters - 1) fprintf(fd, ",");
    }
    fprintf(fd, "\n");
  }

  fclose(fd);
}

void extrae_lite_report_ () { extrae_lite_report(); }
void extrae_lite_report__() { extrae_lite_report(); }
void EXTRAE_LITE_REPORT  () { extrae_lite_report(); }


