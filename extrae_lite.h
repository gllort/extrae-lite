#ifndef __EXTRAE_LITE_H__
#define __EXTRAE_LITE_H__

typedef struct
{
  char              *id;
  int                number_of_mpi_calls;
  unsigned long long elapsed_time_in_mpi;
  unsigned long long elapsed_time_in_useful;
  long long         *counters_in_useful;
} phase_stats_t;

void extrae_lite_init();
void extrae_lite_init_();
void extrae_lite_init__();
void extrae_lite_INIT();
void extrae_lite_next_phase(char *name);
void extrae_lite_next_phase_(char *name);
void extrae_lite_next_phase__(char *name);
void extrae_lite_NEXT_PHASE(char *name);
void extrae_lite_enter();
void extrae_lite_enter_();
void extrae_lite_enter__();
void extrae_lite_ENTER();
void extrae_lite_exit();
void extrae_lite_exit_();
void extrae_lite_exit__();
void extrae_lite_EXIT();
void extrae_lite_report();
void extrae_lite_report_();
void extrae_lite_report__();
void extrae_lite_REPORT();

#endif /* __EXTRAE_LITE_H__ */
