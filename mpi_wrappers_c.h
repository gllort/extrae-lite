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

#ifndef __MPI_WRAPPERS_C_H__
#define __MPI_WRAPPERS_C_H__

#include "mpi_wrappers.h"

int MPI_Init (int *argc, char ***argv);
int MPI_Init_thread (int *argc, char ***argv, int required, int *provided);
int MPI_Finalize (void);
int MPI_Bsend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm);
int MPI_Ssend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm);
int MPI_Rsend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm);
int MPI_Send (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm);
int MPI_Ibsend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request);
int MPI_Isend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request);
int MPI_Issend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request);
int MPI_Irsend (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request);
int MPI_Recv (void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status *status);
int MPI_Irecv (void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request * request);
int MPI_Reduce (CONST void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm);
int MPI_Allreduce (CONST void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
int MPI_Probe (int source, int tag, MPI_Comm comm, MPI_Status *status);
int MPI_Request_get_status (MPI_Request request, int *flag, MPI_Status *status);
int MPI_Iprobe (int source, int tag, MPI_Comm comm, int *flag, MPI_Status *status);
int MPI_Barrier (MPI_Comm comm);
int MPI_Cancel (MPI_Request * request);
int MPI_Test (MPI_Request * request, int *flag, MPI_Status *status);
int MPI_Testall (int count, MPI_Request* requests, int *flag, MPI_Status *statuses);
int MPI_Testany (int count, MPI_Request* requests, int *index, int *flag, MPI_Status *status);
int MPI_Testsome (int incount, MPI_Request* requests, int *outcount, int *indices, MPI_Status *statuses);
int MPI_Wait (MPI_Request * request, MPI_Status *status);
int MPI_Waitall (int count, MPI_Request* requests, MPI_Status *statuses);
int MPI_Waitany (int count, MPI_Request* requests, int *index, MPI_Status *status);
int MPI_Waitsome (int incount, MPI_Request* requests, int *outcount, int *indices, MPI_Status *statuses);
int MPI_BCast (void *buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm);
int MPI_Alltoall (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm);
int MPI_Alltoallv (CONST void *sendbuf, CONST int *sendcounts, CONST int *sdispls, MPI_Datatype sendtype, void *recvbuf, CONST int *recvcounts, CONST int *rdispls, MPI_Datatype recvtype, MPI_Comm comm);
int MPI_Allgather (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm);
int MPI_Allgatherv (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, CONST int *recvcounts, CONST int *displs, MPI_Datatype recvtype, MPI_Comm comm);
int MPI_Gather (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm);
int MPI_Gatherv (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, CONST *recvcounts, CONST *displs, MPI_Datatype recvtype, int root, MPI_Comm comm);
int MPI_Scatter (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm);
int MPI_Scatterv (CONST void *sendbuf, CONST int *sendcounts, CONST int *displs, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm);
int MPI_Comm_rank (MPI_Comm comm, int *rank);
int MPI_Comm_size (MPI_Comm comm, int *size);
int MPI_Comm_create (MPI_Comm comm, MPI_Group group, MPI_Comm *newcomm);
int MPI_Comm_free (MPI_Comm *comm);
int MPI_Comm_dup (MPI_Comm comm, MPI_Comm *newcomm);
int MPI_Comm_split (MPI_Comm comm, int color, int key, MPI_Comm *newcomm);
int MPI_Comm_spawn (CONST char *command, char **argv, int maxprocs, MPI_Info info, int root, MPI_Comm comm, MPI_Comm *intercomm, int *array_of_errcodes);
int MPI_Comm_spawn_multiple (int count, char *array_of_commands[], char* *array_of_argv[], CONST int array_of_maxprocs[], CONST MPI_Info array_of_info[], int root, MPI_Comm comm, MPI_Comm *intercomm, int array_of_errcodes[]);
int MPI_Reduce_scatter (CONST void *sendbuf, void *recvbuf, CONST int *recvcounts, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
int MPI_Scan (CONST void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
int MPI_Cart_create (MPI_Comm comm_old, int ndims, CONST int *dims, CONST int *periods, int reorder, MPI_Comm *comm_cart);
int MPI_Cart_sub (MPI_Comm comm, CONST int *remain_dims, MPI_Comm *comm_new);
int MPI_Start (MPI_Request* request);
int MPI_Startall (int count, MPI_Request* requests);
int MPI_Request_free (MPI_Request * request);
int MPI_Recv_init (void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request * request);
int MPI_Send_init (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request)
int MPI_Bsend_init (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request);
int MPI_Rsend_init (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request);
int MPI_Ssend_init (CONST void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request * request);
int MPI_Sendrecv (CONST void *sendbuf, int sendcount, MPI_Datatype sendtype, int dest, int sendtag, void *recvbuf, int recvcount, MPI_Datatype recvtype, int source, int recvtag, MPI_Comm comm, MPI_Status * status);
int MPI_Sendrecv_replace (void *buf, int count, MPI_Datatype type, int dest, int sendtag, int source, int recvtag, MPI_Comm comm, MPI_Status * status);
int MPI_File_open (MPI_Comm comm, CONST char *filename, int amode, MPI_Info info, MPI_File *fh);
int MPI_File_close (MPI_File *fh);
int MPI_File_read (MPI_File fh, void *buf, int count, MPI_Datatype datatype, MPI_Status *status);
int MPI_File_read_all (MPI_File fh, void *buf, int count, MPI_Datatype datatype, MPI_Status *status);
int MPI_File_read_at (MPI_File fh, MPI_Offset offset, void *buf, int count, MPI_Datatype datatype, MPI_Status *status);
int MPI_File_read_at_all (MPI_File fh, MPI_Offset offset, void *buf, int count, MPI_Datatype datatype, MPI_Status *status);
int MPI_File_write (MPI_File fh, CONST void *buf, int count, MPI_Datatype datatype, MPI_Status *status);
int MPI_File_write_all (MPI_File fh, CONST void *buf, int count, MPI_Datatype datatype, MPI_Status *status);
int MPI_File_write_at (MPI_File fh, MPI_Offset offset, CONST void *buf, int count, MPI_Datatype datatype, MPI_Status *status);
int MPI_File_write_at_all (MPI_File fh, MPI_Offset offset, CONST void *buf, int count, MPI_Datatype datatype, MPI_Status *status);
int MPI_Get (void *origin_addr, int origin_count, MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype, MPI_Win win);
int MPI_Put (CONST void *origin_addr, int origin_count, MPI_Datatype origin_datatype, int target_rank, MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype, MPI_Win win);
int MPI_Type_size (MPI_Datatype datatype, int *size);

#endif /* __MPI_WRAPPERS_C_H__ */
