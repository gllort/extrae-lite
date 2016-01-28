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

#ifndef __MPI_WRAPPERS_F_H__
#define __MPI_WRAPPERS_F_H__

#include <mpi.h>
#include "mpi_wrappers.h"

void mpi_init (MPI_Fint *ierror);
void mpi_init_ (MPI_Fint *ierror);
void mpi_init__ (MPI_Fint *ierror);
void MPI_INIT (MPI_Fint *ierror);
void mpi_init_thread (MPI_Fint *required, MPI_Fint *provided, MPI_Fint *ierror);
void mpi_init_thread_ (MPI_Fint *required, MPI_Fint *provided, MPI_Fint *ierror);
void mpi_init_thread__ (MPI_Fint *required, MPI_Fint *provided, MPI_Fint *ierror);
void MPI_INIT_THREAD (MPI_Fint *required, MPI_Fint *provided, MPI_Fint *ierror);
void mpi_finalize (MPI_Fint *ierror);
void mpi_finalize_ (MPI_Fint *ierror);
void mpi_finalize__ (MPI_Fint *ierror);
void MPI_FINALIZE (MPI_Fint *ierror);
void mpi_bsend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_bsend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_bsend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_BSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_ssend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_ssend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_ssend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_SSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_rsend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_rsend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_rsend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_RSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_send (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_send_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_send__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_SEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_ibsend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_ibsend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_ibsend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void MPI_IBSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_isend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_isend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_isend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void MPI_ISEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_issend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_issend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_issend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void MPI_ISSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_irsend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_irsend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_irsend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void MPI_IRSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_recv (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror);
void mpi_recv_ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror);
void mpi_recv__ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror);
void MPI_RECV (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror);
void mpi_irecv (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_irecv_ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_irecv__ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void MPI_IRECV (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_reduce (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_reduce_ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_reduce__ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_REDUCE (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_allreduce (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_allreduce_ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_allreduce__ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_ALLREDUCE (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_probe (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror);
void mpi_probe_ (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror);
void mpi_probe__ (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror);
void MPI_PROBE (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror);
void mpi_request_get_status (MPI_Fint *request, int *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_request_get_status_ (MPI_Fint *request, int *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_request_get_status__ (MPI_Fint *request, int *flag, MPI_Fint *status, MPI_Fint *ierror);
void MPI_REQUEST_GET_STATUS (MPI_Fint *request, int *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_iprobe (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_iprobe_ (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_iprobe__ (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void MPI_IPROBE (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_barrier (MPI_Fint *comm, MPI_Fint *ierror);
void mpi_barrier_ (MPI_Fint *comm, MPI_Fint *ierror);
void mpi_barrier__ (MPI_Fint *comm, MPI_Fint *ierror);
void MPI_BARRIER (MPI_Fint *comm, MPI_Fint *ierror);
void mpi_cancel (MPI_Fint *request, MPI_Fint *ierror);
void mpi_cancel_ (MPI_Fint *request, MPI_Fint *ierror);
void mpi_cancel__ (MPI_Fint *request, MPI_Fint *ierror);
void MPI_CANCEL (MPI_Fint *request, MPI_Fint *ierror);
void mpi_test (MPI_Fint *request, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_test_ (MPI_Fint *request, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_test__ (MPI_Fint *request, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void MPI_TEST (MPI_Fint *request, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_testall (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *flag, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_testall_ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *flag, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_testall__ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *flag, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void MPI_TESTALL (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *flag, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_testany (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_testany_ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_testany__ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void MPI_TESTANY (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror);
void mpi_testsome (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_testsome_ (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_testsome__ (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void MPI_TESTSOME (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_wait (MPI_Fint *request, MPI_Fint *status, MPI_Fint *ierror);
void mpi_wait_ (MPI_Fint *request, MPI_Fint *status, MPI_Fint *ierror);
void mpi_wait__ (MPI_Fint *request, MPI_Fint *status, MPI_Fint *ierror);
void MPI_WAIT (MPI_Fint *request, MPI_Fint *status, MPI_Fint *ierror);
void mpi_waitall (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_waitall_ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_waitall__ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void MPI_WAITALL (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_waitany (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *status, MPI_Fint *ierror);
void mpi_waitany_ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *status, MPI_Fint *ierror);
void mpi_waitany__ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *status, MPI_Fint *ierror);
void MPI_WAITANY (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *status, MPI_Fint *ierror);
void mpi_waitsome (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_waitsome_ (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_waitsome__ (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void MPI_WAITSOME (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror);
void mpi_bcast (void *buffer, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_bcast_ (void *buffer, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_bcast__ (void *buffer, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_BCAST (void *buffer, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_alltoall (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_alltoall_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_alltoall__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_ALLTOALL (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_alltoallv (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *sdispls, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *rdispls, MPI_Fint *recvtype,    MPI_Fint *comm, MPI_Fint *ierror);
void mpi_alltoallv_ (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *sdispls, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *rdispls, MPI_Fint *recvtype,    MPI_Fint *comm, MPI_Fint *ierror);
void mpi_alltoallv__ (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *sdispls, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *rdispls, MPI_Fint *recvtype,    MPI_Fint *comm, MPI_Fint *ierror);
void MPI_ALLTOALLV (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *sdispls, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *rdispls, MPI_Fint *recvtype,    MPI_Fint *comm, MPI_Fint *ierror);
void mpi_allgather (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_allgather_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_allgather__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_ALLGATHER (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_allgatherv (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_allgatherv_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_allgatherv__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_ALLGATHERV (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_gather (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_gather_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_gather__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_GATHER (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_gatherv (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_gatherv_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_gatherv__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_GATHERV (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_scatter (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_scatter_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_scatter__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_SCATTER (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_scatterv (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *displs, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_scatterv_ (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *displs, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_scatterv__ (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *displs, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_SCATTERV (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *displs, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_comm_rank (MPI_Fint *comm, MPI_Fint *rank, MPI_Fint *ierror);
void mpi_comm_rank_ (MPI_Fint *comm, MPI_Fint *rank, MPI_Fint *ierror);
void mpi_comm_rank__ (MPI_Fint *comm, MPI_Fint *rank, MPI_Fint *ierror);
void MPI_COMM_RANK (MPI_Fint *comm, MPI_Fint *rank, MPI_Fint *ierror);
void mpi_comm_size (MPI_Fint *comm, MPI_Fint *size, MPI_Fint *ierror);
void mpi_comm_size_ (MPI_Fint *comm, MPI_Fint *size, MPI_Fint *ierror);
void mpi_comm_size__ (MPI_Fint *comm, MPI_Fint *size, MPI_Fint *ierror);
void MPI_COMM_SIZE (MPI_Fint *comm, MPI_Fint *size, MPI_Fint *ierror);
void mpi_comm_create (MPI_Fint *comm, MPI_Fint *group, MPI_Fint *newcomm, MPI_Fint *ierror);
void mpi_comm_create_ (MPI_Fint *comm, MPI_Fint *group, MPI_Fint *newcomm, MPI_Fint *ierror);
void mpi_comm_create__ (MPI_Fint *comm, MPI_Fint *group, MPI_Fint *newcomm, MPI_Fint *ierror);
void MPI_COMM_CREATE (MPI_Fint *comm, MPI_Fint *group, MPI_Fint *newcomm, MPI_Fint *ierror);
void mpi_comm_free (MPI_Fint *comm, MPI_Fint *ierror);
void mpi_comm_free_ (MPI_Fint *comm, MPI_Fint *ierror);
void mpi_comm_free__ (MPI_Fint *comm, MPI_Fint *ierror);
void MPI_COMM_FREE (MPI_Fint *comm, MPI_Fint *ierror);
void mpi_comm_dup (MPI_Fint *comm, MPI_Fint *newcomm, MPI_Fint *ierror);
void mpi_comm_dup_ (MPI_Fint *comm, MPI_Fint *newcomm, MPI_Fint *ierror);
void mpi_comm_dup__ (MPI_Fint *comm, MPI_Fint *newcomm, MPI_Fint *ierror);
void MPI_COMM_DUP (MPI_Fint *comm, MPI_Fint *newcomm, MPI_Fint *ierror);
void mpi_comm_split (MPI_Fint *comm, MPI_Fint *color, MPI_Fint *key, MPI_Fint *newcomm, MPI_Fint *ierror);
void mpi_comm_split_ (MPI_Fint *comm, MPI_Fint *color, MPI_Fint *key, MPI_Fint *newcomm, MPI_Fint *ierror);
void mpi_comm_split__ (MPI_Fint *comm, MPI_Fint *color, MPI_Fint *key, MPI_Fint *newcomm, MPI_Fint *ierror);
void MPI_COMM_SPLIT (MPI_Fint *comm, MPI_Fint *color, MPI_Fint *key, MPI_Fint *newcomm, MPI_Fint *ierror);
void mpi_comm_spawn (CONST char *command, char *argv, MPI_Fint *maxprocs, MPI_Fint *info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror);
void mpi_comm_spawn_ (CONST char *command, char *argv, MPI_Fint *maxprocs, MPI_Fint *info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror);
void mpi_comm_spawn__ (CONST char *command, char *argv, MPI_Fint *maxprocs, MPI_Fint *info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror);
void MPI_COMM_SPAWN (CONST char *command, char *argv, MPI_Fint *maxprocs, MPI_Fint *info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror);
void mpi_comm_spawn_multiple (MPI_Fint *count, char *array_of_commands, char *array_of_argv, CONST MPI_Fint *array_of_maxprocs, CONST MPI_Fint *array_of_info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror);
void mpi_comm_spawn_multiple_ (MPI_Fint *count, char *array_of_commands, char *array_of_argv, CONST MPI_Fint *array_of_maxprocs, CONST MPI_Fint *array_of_info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror);
void mpi_comm_spawn_multiple__ (MPI_Fint *count, char *array_of_commands, char *array_of_argv, CONST MPI_Fint *array_of_maxprocs, CONST MPI_Fint *array_of_info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror);
void MPI_COMM_SPAWN_MULTIPLE (MPI_Fint *count, char *array_of_commands, char *array_of_argv, CONST MPI_Fint *array_of_maxprocs, CONST MPI_Fint *array_of_info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror);
void mpi_reduce_scatter (CONST void *sendbuf, void *recvbuf, CONST MPI_Fint *recvcounts, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_reduce_scatter_ (CONST void *sendbuf, void *recvbuf, CONST MPI_Fint *recvcounts, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_reduce_scatter__ (CONST void *sendbuf, void *recvbuf, CONST MPI_Fint *recvcounts, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_REDUCE_SCATTER (CONST void *sendbuf, void *recvbuf, CONST MPI_Fint *recvcounts, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_scan (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_scan_ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_scan__ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void MPI_SCAN (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror);
void mpi_cart_create (MPI_Fint *comm_old, MPI_Fint *ndims, CONST MPI_Fint *dims, CONST MPI_Fint *periods, MPI_Fint *reorder, MPI_Fint *comm_cart, MPI_Fint *ierror);
void mpi_cart_create_ (MPI_Fint *comm_old, MPI_Fint *ndims, CONST MPI_Fint *dims, CONST MPI_Fint *periods, MPI_Fint *reorder, MPI_Fint *comm_cart, MPI_Fint *ierror);
void mpi_cart_create__ (MPI_Fint *comm_old, MPI_Fint *ndims, CONST MPI_Fint *dims, CONST MPI_Fint *periods, MPI_Fint *reorder, MPI_Fint *comm_cart, MPI_Fint *ierror);
void MPI_CART_CREATE (MPI_Fint *comm_old, MPI_Fint *ndims, CONST MPI_Fint *dims, CONST MPI_Fint *periods, MPI_Fint *reorder, MPI_Fint *comm_cart, MPI_Fint *ierror);
void mpi_cart_sub (MPI_Fint *comm, CONST MPI_Fint *remain_dims, MPI_Fint *comm_new, MPI_Fint *ierror);
void mpi_cart_sub_ (MPI_Fint *comm, CONST MPI_Fint *remain_dims, MPI_Fint *comm_new, MPI_Fint *ierror);
void mpi_cart_sub__ (MPI_Fint *comm, CONST MPI_Fint *remain_dims, MPI_Fint *comm_new, MPI_Fint *ierror);
void MPI_CART_SUB (MPI_Fint *comm, CONST MPI_Fint *remain_dims, MPI_Fint *comm_new, MPI_Fint *ierror);
void mpi_start (MPI_Fint *request, MPI_Fint *ierror);
void mpi_start_ (MPI_Fint *request, MPI_Fint *ierror);
void mpi_start__ (MPI_Fint *request, MPI_Fint *ierror);
void MPI_START (MPI_Fint *request, MPI_Fint *ierror);
void mpi_startall (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *ierror);
void mpi_startall_ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *ierror);
void mpi_startall__ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *ierror);
void MPI_STARTALL (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *ierror);
void mpi_request_free (MPI_Fint *request, MPI_Fint *ierror);
void mpi_request_free_ (MPI_Fint *request, MPI_Fint *ierror);
void mpi_request_free__ (MPI_Fint *request, MPI_Fint *ierror);
void MPI_REQUEST_FREE (MPI_Fint *request, MPI_Fint *ierror);
void mpi_recv_init (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_recv_init_ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_recv_init__ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void MPI_RECV_INIT (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_send_init (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_send_init_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_send_init__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void MPI_SEND_INIT (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_bsend_init (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_bsend_init_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_bsend_init__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void MPI_BSEND_INIT (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_rsend_init (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_rsend_init_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_rsend_init__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void MPI_RSEND_INIT (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_ssend_init (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_ssend_init_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_ssend_init__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void MPI_SSEND_INIT (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror);
void mpi_sendrecv (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, MPI_Fint *dest, MPI_Fint *sendtag, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr);
void mpi_sendrecv_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, MPI_Fint *dest, MPI_Fint *sendtag, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr);
void mpi_sendrecv__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, MPI_Fint *dest, MPI_Fint *sendtag, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr);
void MPI_SENDRECV (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, MPI_Fint *dest, MPI_Fint *sendtag, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr);
void mpi_sendrecv_replace (void *buf, MPI_Fint *count, MPI_Fint *type, MPI_Fint *dest, MPI_Fint *sendtag, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr);
void mpi_sendrecv_replace_ (void *buf, MPI_Fint *count, MPI_Fint *type, MPI_Fint *dest, MPI_Fint *sendtag, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr);
void mpi_sendrecv_replace__ (void *buf, MPI_Fint *count, MPI_Fint *type, MPI_Fint *dest, MPI_Fint *sendtag, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr);
void MPI_SENDRECV_REPLACE (void *buf, MPI_Fint *count, MPI_Fint *type, MPI_Fint *dest, MPI_Fint *sendtag, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr);
void mpi_file_open (MPI_Fint *comm, char *filename, MPI_Fint *amode, MPI_Fint *info, MPI_File *fh, MPI_Fint *len);
void mpi_file_open_ (MPI_Fint *comm, char *filename, MPI_Fint *amode, MPI_Fint *info, MPI_File *fh, MPI_Fint *len);
void mpi_file_open__ (MPI_Fint *comm, char *filename, MPI_Fint *amode, MPI_Fint *info, MPI_File *fh, MPI_Fint *len);
void MPI_FILE_OPEN (MPI_Fint *comm, char *filename, MPI_Fint *amode, MPI_Fint *info, MPI_File *fh, MPI_Fint *len);
void mpi_file_close (MPI_File *fh, MPI_Fint *ierror);
void mpi_file_close_ (MPI_File *fh, MPI_Fint *ierror);
void mpi_file_close__ (MPI_File *fh, MPI_Fint *ierror);
void MPI_FILE_CLOSE (MPI_File *fh, MPI_Fint *ierror);
void mpi_file_read (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read_ (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read__ (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void MPI_FILE_READ (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read_all (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read_all_ (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read_all__ (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void MPI_FILE_READ_ALL (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write_ (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write__ (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void MPI_FILE_WRITE (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write_all (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write_all_ (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write_all__ (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void MPI_FILE_WRITE_ALL (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read_at (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read_at_ (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read_at__ (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void MPI_FILE_READ_AT (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read_at_all (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read_at_all_ (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_read_at_all__ (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void MPI_FILE_READ_AT_ALL (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write_at (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write_at_ (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write_at__ (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void MPI_FILE_WRITE_AT (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write_at_all (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write_at_all_ (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void mpi_file_write_at_all__ (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void MPI_FILE_WRITE_AT_ALL (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror);
void pmpi_get (void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint*target_datatype, MPI_Fint* win, MPI_Fint* ierror);
void pmpi_get_ (void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint*target_datatype, MPI_Fint* win, MPI_Fint* ierror);
void pmpi_get__ (void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint*target_datatype, MPI_Fint* win, MPI_Fint* ierror);
void PMPI_GET (void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint*target_datatype, MPI_Fint* win, MPI_Fint* ierror);
void pmpi_put (CONST void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint* target_datatype, MPI_Fint* win, MPI_Fint* ierror);
void pmpi_put_ (CONST void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint* target_datatype, MPI_Fint* win, MPI_Fint* ierror);
void pmpi_put__ (CONST void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint* target_datatype, MPI_Fint* win, MPI_Fint* ierror);
void PMPI_PUT (CONST void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint* target_datatype, MPI_Fint* win, MPI_Fint* ierror);
void mpi_type_size (MPI_Fint *datatype, MPI_Fint *size, MPI_Fint *ret);
void mpi_type_size_ (MPI_Fint *datatype, MPI_Fint *size, MPI_Fint *ret);
void mpi_type_size__ (MPI_Fint *datatype, MPI_Fint *size, MPI_Fint *ret);
void MPI_TYPE_SIZE (MPI_Fint *datatype, MPI_Fint *size, MPI_Fint *ret);

#endif /* __MPI_WRAPPERS_F_H__ */
