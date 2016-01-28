/*****************************************************************************\
 *                        ANALYSIS PERFORMANCE TOOLS                         *
 *                              Extrae-LITE                                  *
 *              Instrumentation package for parallel applications            *
 *****************************************************************************
 *     ___     This library is free software; you can redistribute it and/or *
 *    /  __         modify it under the terms of the GNU LGPL as published   *
 *   /  /  _____    by the Free Software Foundation; either version 2.1      *
 *  /  /  /     \   of the License, or (at your option) any later version.   *
 * (  (  ( B S C )                                                           *
 *  \  \  \_____/   This library is distributed in hope that it will be      *
 *   \  \__         useful but WITHOUT ANY WARRANTY; without even the        *
 *    \___          implied warranty of MERCHANTABILITY or FITNESS FOR A     *
 *                  PARTICULAR PURPOSE. See the GNU LGPL for more details.   *
 *                                                                           *
 * You should have received a copy of the GNU Lesser General Public License  *
 * along with this library; if not, write to the Free Software Foundation,   *
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA          *
 * The GNU LEsser General Public License is contained in the file COPYING.   *
 *                                 ---------                                 *
 *   Barcelona Supercomputing Center - Centro Nacional de Supercomputacion   *
\*****************************************************************************/

#include <mpi.h>
#include "extrae_lite.h"
#include <stdio.h>
#include <stdlib.h>
#include "mpi_wrappers.h"

int MPI_Init (int *argc, char ***argv)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p\n", "MPI_Init", argc, argv);
#endif

  res = PMPI_Init(argc, argv);
  extrae_lite_init();
  return res;
}

int MPI_Init_thread (int *argc, char ***argv, int required, int *provided)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %d %p\n", "MPI_Init_thread", argc, argv, required, provided);
#endif

  res = PMPI_Init_thread(argc, argv, required, provided);
  extrae_lite_init();
  return res;
}

int MPI_Finalize (void)
{
  int res = 0;

#if defined(DEBUG)
#endif

  extrae_lite_enter();
  res = PMPI_Finalize();
  extrae_lite_exit();
  extrae_lite_report();
  return res;
}

int MPI_Bsend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p\n", "MPI_Bsend", buf, count, datatype, dest, tag, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Bsend(buf, count, datatype, dest, tag, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Ssend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p\n", "MPI_Ssend", buf, count, datatype, dest, tag, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Ssend(buf, count, datatype, dest, tag, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Rsend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p\n", "MPI_Rsend", buf, count, datatype, dest, tag, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Rsend(buf, count, datatype, dest, tag, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Send (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p\n", "MPI_Send", buf, count, datatype, dest, tag, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Send(buf, count, datatype, dest, tag, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Ibsend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Ibsend", buf, count, datatype, dest, tag, comm, request);
#endif

  extrae_lite_enter();
  res = PMPI_Ibsend(buf, count, datatype, dest, tag, comm, request);
  extrae_lite_exit();
  return res;
}

int MPI_Isend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Isend", buf, count, datatype, dest, tag, comm, request);
#endif

  extrae_lite_enter();
  res = PMPI_Isend(buf, count, datatype, dest, tag, comm, request);
  extrae_lite_exit();
  return res;
}

int MPI_Issend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Issend", buf, count, datatype, dest, tag, comm, request);
#endif

  extrae_lite_enter();
  res = PMPI_Issend(buf, count, datatype, dest, tag, comm, request);
  extrae_lite_exit();
  return res;
}

int MPI_Irsend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Irsend", buf, count, datatype, dest, tag, comm, request);
#endif

  extrae_lite_enter();
  res = PMPI_Irsend(buf, count, datatype, dest, tag, comm, request);
  extrae_lite_exit();
  return res;
}

int MPI_Recv (void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Recv", buf, count, datatype, source, tag, comm, status);
#endif

  extrae_lite_enter();
  res = PMPI_Recv(buf, count, datatype, source, tag, comm, status);
  extrae_lite_exit();
  return res;
}

int MPI_Irecv (void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Irecv", buf, count, datatype, source, tag, comm, request);
#endif

  extrae_lite_enter();
  res = PMPI_Irecv(buf, count, datatype, source, tag, comm, request);
  extrae_lite_exit();
  return res;
}

int MPI_Reduce (CONST void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %d %p %p %d %p\n", "MPI_Reduce", sendbuf, recvbuf, count, datatype, op, root, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Reduce(sendbuf, recvbuf, count, datatype, op, root, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Allreduce (CONST void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %d %p %p %p\n", "MPI_Allreduce", sendbuf, recvbuf, count, datatype, op, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Allreduce(sendbuf, recvbuf, count, datatype, op, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Probe (int source, int tag, MPI_Comm comm, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %d %d %p %p\n", "MPI_Probe", source, tag, comm, status);
#endif

  extrae_lite_enter();
  res = PMPI_Probe(source, tag, comm, status);
  extrae_lite_exit();
  return res;
}

int MPI_Request_get_status (MPI_Request request, int *flag, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %p\n", "MPI_Request_get_status", request, flag, status);
#endif

  extrae_lite_enter();
  res = PMPI_Request_get_status(request, flag, status);
  extrae_lite_exit();
  return res;
}

int MPI_Iprobe (int source, int tag, MPI_Comm comm, int *flag, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %d %d %p %p %p\n", "MPI_Iprobe", source, tag, comm, flag, status);
#endif

  extrae_lite_enter();
  res = PMPI_Iprobe(source, tag, comm, flag, status);
  extrae_lite_exit();
  return res;
}

int MPI_Barrier (MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p\n", "MPI_Barrier", comm);
#endif

  extrae_lite_enter();
  res = PMPI_Barrier(comm);
  extrae_lite_exit();
  return res;
}

int MPI_Cancel (MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p\n", "MPI_Cancel", request);
#endif

  extrae_lite_enter();
  res = PMPI_Cancel(request);
  extrae_lite_exit();
  return res;
}

int MPI_Test (MPI_Request * request, int *flag, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %p\n", "MPI_Test", request, flag, status);
#endif

  extrae_lite_enter();
  res = PMPI_Test(request, flag, status);
  extrae_lite_exit();
  return res;
}

int MPI_Testall (int count, MPI_Request* requests, int *flag, MPI_Status *statuses)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %d %p %p %p\n", "MPI_Testall", count, requests, flag, statuses);
#endif

  extrae_lite_enter();
  res = PMPI_Testall(count, requests, flag, statuses);
  extrae_lite_exit();
  return res;
}

int MPI_Testany (int count, MPI_Request* requests, int *index, int *flag, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %d %p %p %p %p\n", "MPI_Testany", count, requests, index, flag, status);
#endif

  extrae_lite_enter();
  res = PMPI_Testany(count, requests, index, flag, status);
  extrae_lite_exit();
  return res;
}

int MPI_Testsome (int incount, MPI_Request* requests, int *outcount, int *indices, MPI_Status *statuses)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %d %p %p %p %p\n", "MPI_Testsome", incount, requests, outcount, indices, statuses);
#endif

  extrae_lite_enter();
  res = PMPI_Testsome(incount, requests, outcount, indices, statuses);
  extrae_lite_exit();
  return res;
}

int MPI_Wait (MPI_Request * request, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p\n", "MPI_Wait", request, status);
#endif

  extrae_lite_enter();
  res = PMPI_Wait(request, status);
  extrae_lite_exit();
  return res;
}

int MPI_Waitall (int count, MPI_Request* requests, MPI_Status *statuses)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %d %p %p\n", "MPI_Waitall", count, requests, statuses);
#endif

  extrae_lite_enter();
  res = PMPI_Waitall(count, requests, statuses);
  extrae_lite_exit();
  return res;
}

int MPI_Waitany (int count, MPI_Request* requests, int *index, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %d %p %p %p\n", "MPI_Waitany", count, requests, index, status);
#endif

  extrae_lite_enter();
  res = PMPI_Waitany(count, requests, index, status);
  extrae_lite_exit();
  return res;
}

int MPI_Waitsome (int incount, MPI_Request* requests, int *outcount, int *indices, MPI_Status *statuses)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %d %p %p %p %p\n", "MPI_Waitsome", incount, requests, outcount, indices, statuses);
#endif

  extrae_lite_enter();
  res = PMPI_Waitsome(incount, requests, outcount, indices, statuses);
  extrae_lite_exit();
  return res;
}

int MPI_Bcast (void *buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %p\n", "MPI_Bcast", buffer, count, datatype, root, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Bcast(buffer, count, datatype, root, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Alltoall (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %p %d %p %p\n", "MPI_Alltoall", sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Alltoall(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Alltoallv (CONST void *sendbuf, CONST int *sendcounts, CONST int *sdispls, MPI_Datatype sendtype, void *recvbuf, CONST int *recvcounts, CONST int *rdispls, MPI_Datatype recvtype, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %p %p %p %p %p %p %p\n", "MPI_Alltoallv", sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Alltoallv(sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Allgather (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %p %d %p %p\n", "MPI_Allgather", sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Allgatherv (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, CONST int *recvcounts, CONST int *displs, MPI_Datatype recvtype, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %p %p %p %p %p\n", "MPI_Allgatherv", sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Allgatherv(sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Gather (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %p %d %p %d %p\n", "MPI_Gather", sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Gather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Gatherv (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, CONST int *recvcounts, CONST int *displs, MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %p %p %p %p %d %p\n", "MPI_Gatherv", sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, root, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Gatherv(sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, root, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Scatter (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %p %d %p %d %p\n", "MPI_Scatter", sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Scatter(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Scatterv (CONST void *sendbuf, CONST int *sendcounts, CONST int *displs, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %p %p %p %d %p %d %p\n", "MPI_Scatterv", sendbuf, sendcounts, displs, sendtype, recvbuf, recvcount, recvtype, root, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Scatterv(sendbuf, sendcounts, displs, sendtype, recvbuf, recvcount, recvtype, root, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Comm_rank (MPI_Comm comm, int *rank)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p\n", "MPI_Comm_rank", comm, rank);
#endif

  extrae_lite_enter();
  res = PMPI_Comm_rank(comm, rank);
  extrae_lite_exit();
  return res;
}

int MPI_Comm_size (MPI_Comm comm, int *size)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p\n", "MPI_Comm_size", comm, size);
#endif

  extrae_lite_enter();
  res = PMPI_Comm_size(comm, size);
  extrae_lite_exit();
  return res;
}

int MPI_Comm_create (MPI_Comm comm, MPI_Group group, MPI_Comm *newcomm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %p\n", "MPI_Comm_create", comm, group, newcomm);
#endif

  extrae_lite_enter();
  res = PMPI_Comm_create(comm, group, newcomm);
  extrae_lite_exit();
  return res;
}

int MPI_Comm_free (MPI_Comm *comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p\n", "MPI_Comm_free", comm);
#endif

  extrae_lite_enter();
  res = PMPI_Comm_free(comm);
  extrae_lite_exit();
  return res;
}

int MPI_Comm_dup (MPI_Comm comm, MPI_Comm *newcomm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p\n", "MPI_Comm_dup", comm, newcomm);
#endif

  extrae_lite_enter();
  res = PMPI_Comm_dup(comm, newcomm);
  extrae_lite_exit();
  return res;
}

int MPI_Comm_split (MPI_Comm comm, int color, int key, MPI_Comm *newcomm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %d %p\n", "MPI_Comm_split", comm, color, key, newcomm);
#endif

  extrae_lite_enter();
  res = PMPI_Comm_split(comm, color, key, newcomm);
  extrae_lite_exit();
  return res;
}

int MPI_Comm_spawn (CONST char *command, char **argv, int maxprocs, MPI_Info info, int root, MPI_Comm comm, MPI_Comm *intercomm, int *array_of_errcodes)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %d %p %d %p %p %p\n", "MPI_Comm_spawn", command, argv, maxprocs, info, root, comm, intercomm, array_of_errcodes);
#endif

  extrae_lite_enter();
  res = PMPI_Comm_spawn(command, argv, maxprocs, info, root, comm, intercomm, array_of_errcodes);
  extrae_lite_exit();
  return res;
}

int MPI_Comm_spawn_multiple (int count, char *array_of_commands[], char* *array_of_argv[], CONST int array_of_maxprocs[], CONST MPI_Info array_of_info[], int root, MPI_Comm comm, MPI_Comm *intercomm, int array_of_errcodes[])
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %d %p %p %d %p %d %p %p %d\n", "MPI_Comm_spawn_multiple", count, array_of_commands, array_of_argv, array_of_maxprocs, array_of_info, root, comm, intercomm, array_of_errcodes);
#endif

  extrae_lite_enter();
  res = PMPI_Comm_spawn_multiple(count, array_of_commands, array_of_argv, array_of_maxprocs, array_of_info, root, comm, intercomm, array_of_errcodes);
  extrae_lite_exit();
  return res;
}

int MPI_Reduce_scatter (CONST void *sendbuf, void *recvbuf, CONST int *recvcounts, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %p %p %p %p\n", "MPI_Reduce_scatter", sendbuf, recvbuf, recvcounts, datatype, op, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Reduce_scatter(sendbuf, recvbuf, recvcounts, datatype, op, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Scan (CONST void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %d %p %p %p\n", "MPI_Scan", sendbuf, recvbuf, count, datatype, op, comm);
#endif

  extrae_lite_enter();
  res = PMPI_Scan(sendbuf, recvbuf, count, datatype, op, comm);
  extrae_lite_exit();
  return res;
}

int MPI_Cart_create (MPI_Comm comm_old, int ndims, CONST int *dims, CONST int *periods, int reorder, MPI_Comm *comm_cart)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %p %d %p\n", "MPI_Cart_create", comm_old, ndims, dims, periods, reorder, comm_cart);
#endif

  extrae_lite_enter();
  res = PMPI_Cart_create(comm_old, ndims, dims, periods, reorder, comm_cart);
  extrae_lite_exit();
  return res;
}

int MPI_Cart_sub (MPI_Comm comm, CONST int *remain_dims, MPI_Comm *comm_new)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %p\n", "MPI_Cart_sub", comm, remain_dims, comm_new);
#endif

  extrae_lite_enter();
  res = PMPI_Cart_sub(comm, remain_dims, comm_new);
  extrae_lite_exit();
  return res;
}

int MPI_Start (MPI_Request* request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p\n", "MPI_Start", request);
#endif

  extrae_lite_enter();
  res = PMPI_Start(request);
  extrae_lite_exit();
  return res;
}

int MPI_Startall (int count, MPI_Request* requests)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %d %p\n", "MPI_Startall", count, requests);
#endif

  extrae_lite_enter();
  res = PMPI_Startall(count, requests);
  extrae_lite_exit();
  return res;
}

int MPI_Request_free (MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p\n", "MPI_Request_free", request);
#endif

  extrae_lite_enter();
  res = PMPI_Request_free(request);
  extrae_lite_exit();
  return res;
}

int MPI_Recv_init (void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Recv_init", buf, count, datatype, source, tag, comm, request);
#endif

  extrae_lite_enter();
  res = PMPI_Recv_init(buf, count, datatype, source, tag, comm, request);
  extrae_lite_exit();
  return res;
}

int MPI_Send_init (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Send_init", buf, count, datatype, dest, tag, comm, request);
#endif

  extrae_lite_enter();
  res = PMPI_Send_init(buf, count, datatype, dest, tag, comm, request);
  extrae_lite_exit();
  return res;
}

int MPI_Bsend_init (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Bsend_init", buf, count, datatype, dest, tag, comm, request);
#endif

  extrae_lite_enter();
  res = PMPI_Bsend_init(buf, count, datatype, dest, tag, comm, request);
  extrae_lite_exit();
  return res;
}

int MPI_Rsend_init (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Rsend_init", buf, count, datatype, dest, tag, comm, request);
#endif

  extrae_lite_enter();
  res = PMPI_Rsend_init(buf, count, datatype, dest, tag, comm, request);
  extrae_lite_exit();
  return res;
}

int MPI_Ssend_init (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %p\n", "MPI_Ssend_init", buf, count, datatype, dest, tag, comm, request);
#endif

  extrae_lite_enter();
  res = PMPI_Ssend_init(buf, count, datatype, dest, tag, comm, request);
  extrae_lite_exit();
  return res;
}

int MPI_Sendrecv (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, int dest, int sendtag, void *recvbuf, int recvcount, MPI_Datatype recvtype, int source, int recvtag, MPI_Comm comm, MPI_Status * status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %p %d %p %d %d %p %p\n", "MPI_Sendrecv", sendbuf, sendcount, sendtype, dest, sendtag, recvbuf, recvcount, recvtype, source, recvtag, comm, status);
#endif

  extrae_lite_enter();
  res = PMPI_Sendrecv(sendbuf, sendcount, sendtype, dest, sendtag, recvbuf, recvcount, recvtype, source, recvtag, comm, status);
  extrae_lite_exit();
  return res;
}

int MPI_Sendrecv_replace (void *buf, int count, MPI_Datatype type, int dest, int sendtag, int source, int recvtag, MPI_Comm comm, MPI_Status * status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %d %d %d %p %p\n", "MPI_Sendrecv_replace", buf, count, type, dest, sendtag, source, recvtag, comm, status);
#endif

  extrae_lite_enter();
  res = PMPI_Sendrecv_replace(buf, count, type, dest, sendtag, source, recvtag, comm, status);
  extrae_lite_exit();
  return res;
}

int MPI_File_open (MPI_Comm comm, CONST char *filename, int amode, MPI_Info info, MPI_File *fh)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %d %p %p\n", "MPI_File_open", comm, filename, amode, info, fh);
#endif

  extrae_lite_enter();
  res = PMPI_File_open(comm, filename, amode, info, fh);
  extrae_lite_exit();
  return res;
}

int MPI_File_close (MPI_File *fh)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p\n", "MPI_File_close", fh);
#endif

  extrae_lite_enter();
  res = PMPI_File_close(fh);
  extrae_lite_exit();
  return res;
}

int MPI_File_read (MPI_File fh, void *buf, int count, MPI_Datatype datatype, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %d %p %p\n", "MPI_File_read", fh, buf, count, datatype, status);
#endif

  extrae_lite_enter();
  res = PMPI_File_read(fh, buf, count, datatype, status);
  extrae_lite_exit();
  return res;
}

int MPI_File_read_all (MPI_File fh, void *buf, int count, MPI_Datatype datatype, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %d %p %p\n", "MPI_File_read_all", fh, buf, count, datatype, status);
#endif

  extrae_lite_enter();
  res = PMPI_File_read_all(fh, buf, count, datatype, status);
  extrae_lite_exit();
  return res;
}

int MPI_File_write (MPI_File fh, CONST void *buf, int count, MPI_Datatype datatype, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %d %p %p\n", "MPI_File_write", fh, buf, count, datatype, status);
#endif

  extrae_lite_enter();
  res = PMPI_File_write(fh, buf, count, datatype, status);
  extrae_lite_exit();
  return res;
}

int MPI_File_write_all (MPI_File fh, CONST void *buf, int count, MPI_Datatype datatype, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p %d %p %p\n", "MPI_File_write_all", fh, buf, count, datatype, status);
#endif

  extrae_lite_enter();
  res = PMPI_File_write_all(fh, buf, count, datatype, status);
  extrae_lite_exit();
  return res;
}

int MPI_File_read_at (MPI_File fh, MPI_Offset offset, void *buf, int count, MPI_Datatype datatype, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %lld %p %d %p %p\n", "MPI_File_read_at", fh, offset, buf, count, datatype, status);
#endif

  extrae_lite_enter();
  res = PMPI_File_read_at(fh, offset, buf, count, datatype, status);
  extrae_lite_exit();
  return res;
}

int MPI_File_read_at_all (MPI_File fh, MPI_Offset offset, void *buf, int count, MPI_Datatype datatype, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %lld %p %d %p %p\n", "MPI_File_read_at_all", fh, offset, buf, count, datatype, status);
#endif

  extrae_lite_enter();
  res = PMPI_File_read_at_all(fh, offset, buf, count, datatype, status);
  extrae_lite_exit();
  return res;
}

int MPI_File_write_at (MPI_File fh, MPI_Offset offset, CONST void *buf, int count, MPI_Datatype datatype, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %lld %p %d %p %p\n", "MPI_File_write_at", fh, offset, buf, count, datatype, status);
#endif

  extrae_lite_enter();
  res = PMPI_File_write_at(fh, offset, buf, count, datatype, status);
  extrae_lite_exit();
  return res;
}

int MPI_File_write_at_all (MPI_File fh, MPI_Offset offset, CONST void *buf, int count, MPI_Datatype datatype, MPI_Status *status)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %lld %p %d %p %p\n", "MPI_File_write_at_all", fh, offset, buf, count, datatype, status);
#endif

  extrae_lite_enter();
  res = PMPI_File_write_at_all(fh, offset, buf, count, datatype, status);
  extrae_lite_exit();
  return res;
}

int MPI_Get (void *origin_addr, int origin_count, MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype, MPI_Win win)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %td %d %p %p\n", "MPI_Get", origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win);
#endif

  extrae_lite_enter();
  res = PMPI_Get(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win);
  extrae_lite_exit();
  return res;
}

int MPI_Put (CONST void *origin_addr, int origin_count, MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype, MPI_Win win)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %d %p %d %td %d %p %p\n", "MPI_Put", origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win);
#endif

  extrae_lite_enter();
  res = PMPI_Put(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win);
  extrae_lite_exit();
  return res;
}

int MPI_Type_size (MPI_Datatype datatype, int *size)
{
  int res = 0;

#if defined(DEBUG)
  fprintf(stderr, "EXTRAE-LITE: DEBUG: %s %p %p\n", "MPI_Type_size", datatype, size);
#endif

  extrae_lite_enter();
  res = PMPI_Type_size(datatype, size);
  extrae_lite_exit();
  return res;
}

