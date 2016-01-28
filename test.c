#include <mpi.h>
#include "extrae_lite.h"

int main(int argc, char **argv)
{
  MPI_Init(&argc, &argv);

  MPI_Barrier(MPI_COMM_WORLD);
  sleep(1);
  MPI_Barrier(MPI_COMM_WORLD);
  extrae_lite_next_phase("another_phase");
  sleep(1);

  MPI_Barrier(MPI_COMM_WORLD);

  MPI_Finalize();
}
