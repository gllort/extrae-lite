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
#include <stdio.h>
#include <stdlib.h>
#include "mpi_wrappers.h"

void mpi_init (MPI_Fint *ierror)
{
  pmpi_init(ierror);
  extrae_lite_init();
}

void mpi_init_ (MPI_Fint *ierror)
{
  pmpi_init_(ierror);
  extrae_lite_init();
}

void mpi_init__ (MPI_Fint *ierror)
{
  pmpi_init__(ierror);
  extrae_lite_init();
}

void MPI_INIT (MPI_Fint *ierror)
{
  PMPI_INIT(ierror);
  extrae_lite_init();
}

void mpi_init_thread (MPI_Fint *required, MPI_Fint *provided, MPI_Fint *ierror)
{
  pmpi_init_thread(required, provided, ierror);
  extrae_lite_init();
}

void mpi_init_thread_ (MPI_Fint *required, MPI_Fint *provided, MPI_Fint *ierror)
{
  pmpi_init_thread_(required, provided, ierror);
  extrae_lite_init();
}

void mpi_init_thread__ (MPI_Fint *required, MPI_Fint *provided, MPI_Fint *ierror)
{
  pmpi_init_thread__(required, provided, ierror);
  extrae_lite_init();
}

void MPI_INIT_THREAD (MPI_Fint *required, MPI_Fint *provided, MPI_Fint *ierror)
{
  PMPI_INIT_THREAD(required, provided, ierror);
  extrae_lite_init();
}

void mpi_finalize (MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_finalize(ierror);
  extrae_lite_exit();
  extrae_lite_report();
}

void mpi_finalize_ (MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_finalize_(ierror);
  extrae_lite_exit();
  extrae_lite_report();
}

void mpi_finalize__ (MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_finalize__(ierror);
  extrae_lite_exit();
  extrae_lite_report();
}

void MPI_FINALIZE (MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_FINALIZE(ierror);
  extrae_lite_exit();
  extrae_lite_report();
}

void mpi_bsend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_bsend(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_bsend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_bsend_(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_bsend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_bsend__(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void MPI_BSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_BSEND(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_ssend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_ssend(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_ssend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_ssend_(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_ssend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_ssend__(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void MPI_SSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_SSEND(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_rsend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_rsend(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_rsend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_rsend_(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_rsend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_rsend__(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void MPI_RSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_RSEND(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_send (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_send(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_send_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_send_(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_send__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_send__(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void MPI_SEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_SEND(buf, count, datatype, dest, tag, comm, ierror);
  extrae_lite_exit();
}

void mpi_ibsend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_ibsend(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_ibsend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_ibsend_(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_ibsend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_ibsend__(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void MPI_IBSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_IBSEND(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_isend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_isend(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_isend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_isend_(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_isend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_isend__(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void MPI_ISEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_ISEND(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_issend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_issend(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_issend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_issend_(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_issend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_issend__(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void MPI_ISSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_ISSEND(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_irsend (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_irsend(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_irsend_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_irsend_(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_irsend__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_irsend__(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void MPI_IRSEND (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_IRSEND(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_recv (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_recv(buf, count, datatype, source, tag, comm, status, ierror);
  extrae_lite_exit();
}

void mpi_recv_ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_recv_(buf, count, datatype, source, tag, comm, status, ierror);
  extrae_lite_exit();
}

void mpi_recv__ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_recv__(buf, count, datatype, source, tag, comm, status, ierror);
  extrae_lite_exit();
}

void MPI_RECV (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_RECV(buf, count, datatype, source, tag, comm, status, ierror);
  extrae_lite_exit();
}

void mpi_irecv (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_irecv(buf, count, datatype, source, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_irecv_ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_irecv_(buf, count, datatype, source, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_irecv__ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_irecv__(buf, count, datatype, source, tag, comm, request, ierror);
  extrae_lite_exit();
}

void MPI_IRECV (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_IRECV(buf, count, datatype, source, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_reduce (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_reduce(sendbuf, recvbuf, count, datatype, op, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_reduce_ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_reduce_(sendbuf, recvbuf, count, datatype, op, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_reduce__ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_reduce__(sendbuf, recvbuf, count, datatype, op, root, comm, ierror);
  extrae_lite_exit();
}

void MPI_REDUCE (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_REDUCE(sendbuf, recvbuf, count, datatype, op, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_allreduce (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_allreduce(sendbuf, recvbuf, count, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void mpi_allreduce_ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_allreduce_(sendbuf, recvbuf, count, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void mpi_allreduce__ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_allreduce__(sendbuf, recvbuf, count, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void MPI_ALLREDUCE (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_ALLREDUCE(sendbuf, recvbuf, count, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void mpi_probe (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_probe(source, tag, comm, status, ierror);
  extrae_lite_exit();
}

void mpi_probe_ (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_probe_(source, tag, comm, status, ierror);
  extrae_lite_exit();
}

void mpi_probe__ (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_probe__(source, tag, comm, status, ierror);
  extrae_lite_exit();
}

void MPI_PROBE (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_PROBE(source, tag, comm, status, ierror);
  extrae_lite_exit();
}

void mpi_request_get_status (MPI_Fint *request, int *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_request_get_status(request, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_request_get_status_ (MPI_Fint *request, int *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_request_get_status_(request, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_request_get_status__ (MPI_Fint *request, int *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_request_get_status__(request, flag, status, ierror);
  extrae_lite_exit();
}

void MPI_REQUEST_GET_STATUS (MPI_Fint *request, int *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_REQUEST_GET_STATUS(request, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_iprobe (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_iprobe(source, tag, comm, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_iprobe_ (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_iprobe_(source, tag, comm, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_iprobe__ (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_iprobe__(source, tag, comm, flag, status, ierror);
  extrae_lite_exit();
}

void MPI_IPROBE (MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_IPROBE(source, tag, comm, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_barrier (MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_barrier(comm, ierror);
  extrae_lite_exit();
}

void mpi_barrier_ (MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_barrier_(comm, ierror);
  extrae_lite_exit();
}

void mpi_barrier__ (MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_barrier__(comm, ierror);
  extrae_lite_exit();
}

void MPI_BARRIER (MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_BARRIER(comm, ierror);
  extrae_lite_exit();
}

void mpi_cancel (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_cancel(request, ierror);
  extrae_lite_exit();
}

void mpi_cancel_ (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_cancel_(request, ierror);
  extrae_lite_exit();
}

void mpi_cancel__ (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_cancel__(request, ierror);
  extrae_lite_exit();
}

void MPI_CANCEL (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_CANCEL(request, ierror);
  extrae_lite_exit();
}

void mpi_test (MPI_Fint *request, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_test(request, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_test_ (MPI_Fint *request, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_test_(request, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_test__ (MPI_Fint *request, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_test__(request, flag, status, ierror);
  extrae_lite_exit();
}

void MPI_TEST (MPI_Fint *request, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_TEST(request, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_testall (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *flag, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_testall(count, array_of_requests, flag, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_testall_ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *flag, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_testall_(count, array_of_requests, flag, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_testall__ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *flag, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_testall__(count, array_of_requests, flag, array_of_statuses, ierror);
  extrae_lite_exit();
}

void MPI_TESTALL (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *flag, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_TESTALL(count, array_of_requests, flag, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_testany (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_testany(count, array_of_requests, index, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_testany_ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_testany_(count, array_of_requests, index, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_testany__ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_testany__(count, array_of_requests, index, flag, status, ierror);
  extrae_lite_exit();
}

void MPI_TESTANY (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *flag, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_TESTANY(count, array_of_requests, index, flag, status, ierror);
  extrae_lite_exit();
}

void mpi_testsome (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_testsome(incount, array_of_requests, outcount, array_of_indices, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_testsome_ (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_testsome_(incount, array_of_requests, outcount, array_of_indices, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_testsome__ (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_testsome__(incount, array_of_requests, outcount, array_of_indices, array_of_statuses, ierror);
  extrae_lite_exit();
}

void MPI_TESTSOME (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_TESTSOME(incount, array_of_requests, outcount, array_of_indices, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_wait (MPI_Fint *request, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_wait(request, status, ierror);
  extrae_lite_exit();
}

void mpi_wait_ (MPI_Fint *request, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_wait_(request, status, ierror);
  extrae_lite_exit();
}

void mpi_wait__ (MPI_Fint *request, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_wait__(request, status, ierror);
  extrae_lite_exit();
}

void MPI_WAIT (MPI_Fint *request, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_WAIT(request, status, ierror);
  extrae_lite_exit();
}

void mpi_waitall (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_waitall(count, array_of_requests, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_waitall_ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_waitall_(count, array_of_requests, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_waitall__ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_waitall__(count, array_of_requests, array_of_statuses, ierror);
  extrae_lite_exit();
}

void MPI_WAITALL (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_WAITALL(count, array_of_requests, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_waitany (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_waitany(count, array_of_requests, index, status, ierror);
  extrae_lite_exit();
}

void mpi_waitany_ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_waitany_(count, array_of_requests, index, status, ierror);
  extrae_lite_exit();
}

void mpi_waitany__ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_waitany__(count, array_of_requests, index, status, ierror);
  extrae_lite_exit();
}

void MPI_WAITANY (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *index, MPI_Fint *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_WAITANY(count, array_of_requests, index, status, ierror);
  extrae_lite_exit();
}

void mpi_waitsome (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_waitsome(incount, array_of_requests, outcount, array_of_indices, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_waitsome_ (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_waitsome_(incount, array_of_requests, outcount, array_of_indices, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_waitsome__ (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_waitsome__(incount, array_of_requests, outcount, array_of_indices, array_of_statuses, ierror);
  extrae_lite_exit();
}

void MPI_WAITSOME (MPI_Fint *incount, MPI_Fint *array_of_requests, MPI_Fint *outcount, MPI_Fint *array_of_indices, MPI_Fint **array_of_statuses, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_WAITSOME(incount, array_of_requests, outcount, array_of_indices, array_of_statuses, ierror);
  extrae_lite_exit();
}

void mpi_bcast (void *buffer, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_bcast(buffer, count, datatype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_bcast_ (void *buffer, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_bcast_(buffer, count, datatype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_bcast__ (void *buffer, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_bcast__(buffer, count, datatype, root, comm, ierror);
  extrae_lite_exit();
}

void MPI_BCAST (void *buffer, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_BCAST(buffer, count, datatype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_alltoall (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_alltoall(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_alltoall_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_alltoall_(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_alltoall__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_alltoall__(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, ierror);
  extrae_lite_exit();
}

void MPI_ALLTOALL (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_ALLTOALL(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_alltoallv (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *sdispls, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *rdispls, MPI_Fint *recvtype,    MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_alltoallv(sendbuf, sendcount, sdispls, sendtype, recvbuf, recvcount, rdispls, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_alltoallv_ (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *sdispls, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *rdispls, MPI_Fint *recvtype,    MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_alltoallv_(sendbuf, sendcount, sdispls, sendtype, recvbuf, recvcount, rdispls, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_alltoallv__ (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *sdispls, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *rdispls, MPI_Fint *recvtype,    MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_alltoallv__(sendbuf, sendcount, sdispls, sendtype, recvbuf, recvcount, rdispls, recvtype, comm, ierror);
  extrae_lite_exit();
}

void MPI_ALLTOALLV (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *sdispls, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *rdispls, MPI_Fint *recvtype,    MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_ALLTOALLV(sendbuf, sendcount, sdispls, sendtype, recvbuf, recvcount, rdispls, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_allgather (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_allgather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_allgather_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_allgather_(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_allgather__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_allgather__(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, ierror);
  extrae_lite_exit();
}

void MPI_ALLGATHER (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_ALLGATHER(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_allgatherv (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_allgatherv(sendbuf, sendcount, sendtype, recvbuf, recvcount, displs, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_allgatherv_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_allgatherv_(sendbuf, sendcount, sendtype, recvbuf, recvcount, displs, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_allgatherv__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_allgatherv__(sendbuf, sendcount, sendtype, recvbuf, recvcount, displs, recvtype, comm, ierror);
  extrae_lite_exit();
}

void MPI_ALLGATHERV (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_ALLGATHERV(sendbuf, sendcount, sendtype, recvbuf, recvcount, displs, recvtype, comm, ierror);
  extrae_lite_exit();
}

void mpi_gather (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_gather(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_gather_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_gather_(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_gather__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_gather__(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void MPI_GATHER (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_GATHER(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_gatherv (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_gatherv(sendbuf, sendcount, sendtype, recvbuf, recvcount, displs, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_gatherv_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_gatherv_(sendbuf, sendcount, sendtype, recvbuf, recvcount, displs, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_gatherv__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_gatherv__(sendbuf, sendcount, sendtype, recvbuf, recvcount, displs, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void MPI_GATHERV (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, CONST MPI_Fint *recvcount, CONST MPI_Fint *displs, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_GATHERV(sendbuf, sendcount, sendtype, recvbuf, recvcount, displs, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_scatter (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_scatter(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_scatter_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_scatter_(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_scatter__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_scatter__(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void MPI_SCATTER (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_SCATTER(sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_scatterv (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *displs, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_scatterv(sendbuf, sendcount, displs, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_scatterv_ (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *displs, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_scatterv_(sendbuf, sendcount, displs, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_scatterv__ (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *displs, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_scatterv__(sendbuf, sendcount, displs, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void MPI_SCATTERV (CONST void *sendbuf, CONST MPI_Fint *sendcount, CONST MPI_Fint *displs, MPI_Fint *sendtype, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_SCATTERV(sendbuf, sendcount, displs, sendtype, recvbuf, recvcount, recvtype, root, comm, ierror);
  extrae_lite_exit();
}

void mpi_comm_rank (MPI_Fint *comm, MPI_Fint *rank, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_rank(comm, rank, ierror);
  extrae_lite_exit();
}

void mpi_comm_rank_ (MPI_Fint *comm, MPI_Fint *rank, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_rank_(comm, rank, ierror);
  extrae_lite_exit();
}

void mpi_comm_rank__ (MPI_Fint *comm, MPI_Fint *rank, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_rank__(comm, rank, ierror);
  extrae_lite_exit();
}

void MPI_COMM_RANK (MPI_Fint *comm, MPI_Fint *rank, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_COMM_RANK(comm, rank, ierror);
  extrae_lite_exit();
}

void mpi_comm_size (MPI_Fint *comm, MPI_Fint *size, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_size(comm, size, ierror);
  extrae_lite_exit();
}

void mpi_comm_size_ (MPI_Fint *comm, MPI_Fint *size, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_size_(comm, size, ierror);
  extrae_lite_exit();
}

void mpi_comm_size__ (MPI_Fint *comm, MPI_Fint *size, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_size__(comm, size, ierror);
  extrae_lite_exit();
}

void MPI_COMM_SIZE (MPI_Fint *comm, MPI_Fint *size, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_COMM_SIZE(comm, size, ierror);
  extrae_lite_exit();
}

void mpi_comm_create (MPI_Fint *comm, MPI_Fint *group, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_create(comm, group, newcomm, ierror);
  extrae_lite_exit();
}

void mpi_comm_create_ (MPI_Fint *comm, MPI_Fint *group, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_create_(comm, group, newcomm, ierror);
  extrae_lite_exit();
}

void mpi_comm_create__ (MPI_Fint *comm, MPI_Fint *group, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_create__(comm, group, newcomm, ierror);
  extrae_lite_exit();
}

void MPI_COMM_CREATE (MPI_Fint *comm, MPI_Fint *group, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_COMM_CREATE(comm, group, newcomm, ierror);
  extrae_lite_exit();
}

void mpi_comm_free (MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_free(comm, ierror);
  extrae_lite_exit();
}

void mpi_comm_free_ (MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_free_(comm, ierror);
  extrae_lite_exit();
}

void mpi_comm_free__ (MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_free__(comm, ierror);
  extrae_lite_exit();
}

void MPI_COMM_FREE (MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_COMM_FREE(comm, ierror);
  extrae_lite_exit();
}

void mpi_comm_dup (MPI_Fint *comm, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_dup(comm, newcomm, ierror);
  extrae_lite_exit();
}

void mpi_comm_dup_ (MPI_Fint *comm, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_dup_(comm, newcomm, ierror);
  extrae_lite_exit();
}

void mpi_comm_dup__ (MPI_Fint *comm, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_dup__(comm, newcomm, ierror);
  extrae_lite_exit();
}

void MPI_COMM_DUP (MPI_Fint *comm, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_COMM_DUP(comm, newcomm, ierror);
  extrae_lite_exit();
}

void mpi_comm_split (MPI_Fint *comm, MPI_Fint *color, MPI_Fint *key, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_split(comm, color, key, newcomm, ierror);
  extrae_lite_exit();
}

void mpi_comm_split_ (MPI_Fint *comm, MPI_Fint *color, MPI_Fint *key, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_split_(comm, color, key, newcomm, ierror);
  extrae_lite_exit();
}

void mpi_comm_split__ (MPI_Fint *comm, MPI_Fint *color, MPI_Fint *key, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_split__(comm, color, key, newcomm, ierror);
  extrae_lite_exit();
}

void MPI_COMM_SPLIT (MPI_Fint *comm, MPI_Fint *color, MPI_Fint *key, MPI_Fint *newcomm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_COMM_SPLIT(comm, color, key, newcomm, ierror);
  extrae_lite_exit();
}

void mpi_comm_spawn (CONST char *command, char *argv, MPI_Fint *maxprocs, MPI_Fint *info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_spawn(command, argv, maxprocs, info, root, comm, intercomm, array_of_errcodes, ierror);
  extrae_lite_exit();
}

void mpi_comm_spawn_ (CONST char *command, char *argv, MPI_Fint *maxprocs, MPI_Fint *info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_spawn_(command, argv, maxprocs, info, root, comm, intercomm, array_of_errcodes, ierror);
  extrae_lite_exit();
}

void mpi_comm_spawn__ (CONST char *command, char *argv, MPI_Fint *maxprocs, MPI_Fint *info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_spawn__(command, argv, maxprocs, info, root, comm, intercomm, array_of_errcodes, ierror);
  extrae_lite_exit();
}

void MPI_COMM_SPAWN (CONST char *command, char *argv, MPI_Fint *maxprocs, MPI_Fint *info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_COMM_SPAWN(command, argv, maxprocs, info, root, comm, intercomm, array_of_errcodes, ierror);
  extrae_lite_exit();
}

void mpi_comm_spawn_multiple (MPI_Fint *count, char *array_of_commands, char *array_of_argv, CONST MPI_Fint *array_of_maxprocs, CONST MPI_Fint *array_of_info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_spawn_multiple(count, array_of_commands, array_of_argv, array_of_maxprocs, array_of_info, root, comm, intercomm, array_of_errcodes, ierror);
  extrae_lite_exit();
}

void mpi_comm_spawn_multiple_ (MPI_Fint *count, char *array_of_commands, char *array_of_argv, CONST MPI_Fint *array_of_maxprocs, CONST MPI_Fint *array_of_info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_spawn_multiple_(count, array_of_commands, array_of_argv, array_of_maxprocs, array_of_info, root, comm, intercomm, array_of_errcodes, ierror);
  extrae_lite_exit();
}

void mpi_comm_spawn_multiple__ (MPI_Fint *count, char *array_of_commands, char *array_of_argv, CONST MPI_Fint *array_of_maxprocs, CONST MPI_Fint *array_of_info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_comm_spawn_multiple__(count, array_of_commands, array_of_argv, array_of_maxprocs, array_of_info, root, comm, intercomm, array_of_errcodes, ierror);
  extrae_lite_exit();
}

void MPI_COMM_SPAWN_MULTIPLE (MPI_Fint *count, char *array_of_commands, char *array_of_argv, CONST MPI_Fint *array_of_maxprocs, CONST MPI_Fint *array_of_info, MPI_Fint *root, MPI_Fint *comm, MPI_Fint *intercomm, MPI_Fint *array_of_errcodes, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_COMM_SPAWN_MULTIPLE(count, array_of_commands, array_of_argv, array_of_maxprocs, array_of_info, root, comm, intercomm, array_of_errcodes, ierror);
  extrae_lite_exit();
}

void mpi_reduce_scatter (CONST void *sendbuf, void *recvbuf, CONST MPI_Fint *recvcounts, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_reduce_scatter(sendbuf, recvbuf, recvcounts, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void mpi_reduce_scatter_ (CONST void *sendbuf, void *recvbuf, CONST MPI_Fint *recvcounts, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_reduce_scatter_(sendbuf, recvbuf, recvcounts, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void mpi_reduce_scatter__ (CONST void *sendbuf, void *recvbuf, CONST MPI_Fint *recvcounts, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_reduce_scatter__(sendbuf, recvbuf, recvcounts, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void MPI_REDUCE_SCATTER (CONST void *sendbuf, void *recvbuf, CONST MPI_Fint *recvcounts, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_REDUCE_SCATTER(sendbuf, recvbuf, recvcounts, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void mpi_scan (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_scan(sendbuf, recvbuf, count, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void mpi_scan_ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_scan_(sendbuf, recvbuf, count, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void mpi_scan__ (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_scan__(sendbuf, recvbuf, count, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void MPI_SCAN (CONST void *sendbuf, void *recvbuf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *op, MPI_Fint *comm, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_SCAN(sendbuf, recvbuf, count, datatype, op, comm, ierror);
  extrae_lite_exit();
}

void mpi_cart_create (MPI_Fint *comm_old, MPI_Fint *ndims, CONST MPI_Fint *dims, CONST MPI_Fint *periods, MPI_Fint *reorder, MPI_Fint *comm_cart, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_cart_create(comm_old, ndims, dims, periods, reorder, comm_cart, ierror);
  extrae_lite_exit();
}

void mpi_cart_create_ (MPI_Fint *comm_old, MPI_Fint *ndims, CONST MPI_Fint *dims, CONST MPI_Fint *periods, MPI_Fint *reorder, MPI_Fint *comm_cart, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_cart_create_(comm_old, ndims, dims, periods, reorder, comm_cart, ierror);
  extrae_lite_exit();
}

void mpi_cart_create__ (MPI_Fint *comm_old, MPI_Fint *ndims, CONST MPI_Fint *dims, CONST MPI_Fint *periods, MPI_Fint *reorder, MPI_Fint *comm_cart, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_cart_create__(comm_old, ndims, dims, periods, reorder, comm_cart, ierror);
  extrae_lite_exit();
}

void MPI_CART_CREATE (MPI_Fint *comm_old, MPI_Fint *ndims, CONST MPI_Fint *dims, CONST MPI_Fint *periods, MPI_Fint *reorder, MPI_Fint *comm_cart, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_CART_CREATE(comm_old, ndims, dims, periods, reorder, comm_cart, ierror);
  extrae_lite_exit();
}

void mpi_cart_sub (MPI_Fint *comm, CONST MPI_Fint *remain_dims, MPI_Fint *comm_new, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_cart_sub(comm, remain_dims, comm_new, ierror);
  extrae_lite_exit();
}

void mpi_cart_sub_ (MPI_Fint *comm, CONST MPI_Fint *remain_dims, MPI_Fint *comm_new, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_cart_sub_(comm, remain_dims, comm_new, ierror);
  extrae_lite_exit();
}

void mpi_cart_sub__ (MPI_Fint *comm, CONST MPI_Fint *remain_dims, MPI_Fint *comm_new, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_cart_sub__(comm, remain_dims, comm_new, ierror);
  extrae_lite_exit();
}

void MPI_CART_SUB (MPI_Fint *comm, CONST MPI_Fint *remain_dims, MPI_Fint *comm_new, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_CART_SUB(comm, remain_dims, comm_new, ierror);
  extrae_lite_exit();
}

void mpi_start (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_start(request, ierror);
  extrae_lite_exit();
}

void mpi_start_ (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_start_(request, ierror);
  extrae_lite_exit();
}

void mpi_start__ (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_start__(request, ierror);
  extrae_lite_exit();
}

void MPI_START (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_START(request, ierror);
  extrae_lite_exit();
}

void mpi_startall (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_startall(count, array_of_requests, ierror);
  extrae_lite_exit();
}

void mpi_startall_ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_startall_(count, array_of_requests, ierror);
  extrae_lite_exit();
}

void mpi_startall__ (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_startall__(count, array_of_requests, ierror);
  extrae_lite_exit();
}

void MPI_STARTALL (MPI_Fint *count, MPI_Fint *array_of_requests, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_STARTALL(count, array_of_requests, ierror);
  extrae_lite_exit();
}

void mpi_request_free (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_request_free(request, ierror);
  extrae_lite_exit();
}

void mpi_request_free_ (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_request_free_(request, ierror);
  extrae_lite_exit();
}

void mpi_request_free__ (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_request_free__(request, ierror);
  extrae_lite_exit();
}

void MPI_REQUEST_FREE (MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_REQUEST_FREE(request, ierror);
  extrae_lite_exit();
}

void mpi_recv_init (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_recv_init(buf, count, datatype, source, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_recv_init_ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_recv_init_(buf, count, datatype, source, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_recv_init__ (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_recv_init__(buf, count, datatype, source, tag, comm, request, ierror);
  extrae_lite_exit();
}

void MPI_RECV_INIT (void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *source, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_RECV_INIT(buf, count, datatype, source, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_send_init (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_send_init(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_send_init_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_send_init_(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_send_init__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_send_init__(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void MPI_SEND_INIT (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_SEND_INIT(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_bsend_init (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_bsend_init(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_bsend_init_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_bsend_init_(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_bsend_init__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_bsend_init__(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void MPI_BSEND_INIT (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_BSEND_INIT(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_rsend_init (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_rsend_init(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_rsend_init_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_rsend_init_(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_rsend_init__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_rsend_init__(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void MPI_RSEND_INIT (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_RSEND_INIT(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_ssend_init (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_ssend_init(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_ssend_init_ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_ssend_init_(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_ssend_init__ (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_ssend_init__(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void MPI_SSEND_INIT (CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Fint *dest, MPI_Fint *tag, MPI_Fint *comm, MPI_Fint *request, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_SSEND_INIT(buf, count, datatype, dest, tag, comm, request, ierror);
  extrae_lite_exit();
}

void mpi_sendrecv (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, MPI_Fint *dest, MPI_Fint *sendtag, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr)
{
  extrae_lite_enter();
  pmpi_sendrecv(sendbuf, sendcount, sendtype, dest, sendtag, recvbuf, recvcount, recvtype, source, recvtag, comm, status, ierr);
  extrae_lite_exit();
}

void mpi_sendrecv_ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, MPI_Fint *dest, MPI_Fint *sendtag, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr)
{
  extrae_lite_enter();
  pmpi_sendrecv_(sendbuf, sendcount, sendtype, dest, sendtag, recvbuf, recvcount, recvtype, source, recvtag, comm, status, ierr);
  extrae_lite_exit();
}

void mpi_sendrecv__ (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, MPI_Fint *dest, MPI_Fint *sendtag, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr)
{
  extrae_lite_enter();
  pmpi_sendrecv__(sendbuf, sendcount, sendtype, dest, sendtag, recvbuf, recvcount, recvtype, source, recvtag, comm, status, ierr);
  extrae_lite_exit();
}

void MPI_SENDRECV (CONST void *sendbuf, MPI_Fint *sendcount, MPI_Fint *sendtype, MPI_Fint *dest, MPI_Fint *sendtag, void *recvbuf, MPI_Fint *recvcount, MPI_Fint *recvtype, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr)
{
  extrae_lite_enter();
  PMPI_SENDRECV(sendbuf, sendcount, sendtype, dest, sendtag, recvbuf, recvcount, recvtype, source, recvtag, comm, status, ierr);
  extrae_lite_exit();
}

void mpi_sendrecv_replace (void *buf, MPI_Fint *count, MPI_Fint *type, MPI_Fint *dest, MPI_Fint *sendtag, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr)
{
  extrae_lite_enter();
  pmpi_sendrecv_replace(buf, count, type, dest, sendtag, source, recvtag, comm, status, ierr);
  extrae_lite_exit();
}

void mpi_sendrecv_replace_ (void *buf, MPI_Fint *count, MPI_Fint *type, MPI_Fint *dest, MPI_Fint *sendtag, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr)
{
  extrae_lite_enter();
  pmpi_sendrecv_replace_(buf, count, type, dest, sendtag, source, recvtag, comm, status, ierr);
  extrae_lite_exit();
}

void mpi_sendrecv_replace__ (void *buf, MPI_Fint *count, MPI_Fint *type, MPI_Fint *dest, MPI_Fint *sendtag, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr)
{
  extrae_lite_enter();
  pmpi_sendrecv_replace__(buf, count, type, dest, sendtag, source, recvtag, comm, status, ierr);
  extrae_lite_exit();
}

void MPI_SENDRECV_REPLACE (void *buf, MPI_Fint *count, MPI_Fint *type, MPI_Fint *dest, MPI_Fint *sendtag, MPI_Fint *source, MPI_Fint *recvtag, MPI_Fint *comm, MPI_Fint *status, MPI_Fint *ierr)
{
  extrae_lite_enter();
  PMPI_SENDRECV_REPLACE(buf, count, type, dest, sendtag, source, recvtag, comm, status, ierr);
  extrae_lite_exit();
}

void mpi_file_open (MPI_Fint *comm, char *filename, MPI_Fint *amode, MPI_Fint *info, MPI_File *fh, MPI_Fint *len)
{
  extrae_lite_enter();
  pmpi_file_open(comm, filename, amode, info, fh, len);
  extrae_lite_exit();
}

void mpi_file_open_ (MPI_Fint *comm, char *filename, MPI_Fint *amode, MPI_Fint *info, MPI_File *fh, MPI_Fint *len)
{
  extrae_lite_enter();
  pmpi_file_open_(comm, filename, amode, info, fh, len);
  extrae_lite_exit();
}

void mpi_file_open__ (MPI_Fint *comm, char *filename, MPI_Fint *amode, MPI_Fint *info, MPI_File *fh, MPI_Fint *len)
{
  extrae_lite_enter();
  pmpi_file_open__(comm, filename, amode, info, fh, len);
  extrae_lite_exit();
}

void MPI_FILE_OPEN (MPI_Fint *comm, char *filename, MPI_Fint *amode, MPI_Fint *info, MPI_File *fh, MPI_Fint *len)
{
  extrae_lite_enter();
  PMPI_FILE_OPEN(comm, filename, amode, info, fh, len);
  extrae_lite_exit();
}

void mpi_file_close (MPI_File *fh, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_close(fh, ierror);
  extrae_lite_exit();
}

void mpi_file_close_ (MPI_File *fh, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_close_(fh, ierror);
  extrae_lite_exit();
}

void mpi_file_close__ (MPI_File *fh, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_close__(fh, ierror);
  extrae_lite_exit();
}

void MPI_FILE_CLOSE (MPI_File *fh, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_FILE_CLOSE(fh, ierror);
  extrae_lite_exit();
}

void mpi_file_read (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read_ (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read_(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read__ (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read__(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void MPI_FILE_READ (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_FILE_READ(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read_all (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read_all(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read_all_ (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read_all_(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read_all__ (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read_all__(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void MPI_FILE_READ_ALL (MPI_File *fh, void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_FILE_READ_ALL(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write_ (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write_(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write__ (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write__(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void MPI_FILE_WRITE (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_FILE_WRITE(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write_all (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write_all(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write_all_ (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write_all_(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write_all__ (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write_all__(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void MPI_FILE_WRITE_ALL (MPI_File *fh, CONST void *buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_FILE_WRITE_ALL(fh, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read_at (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read_at(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read_at_ (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read_at_(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read_at__ (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read_at__(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void MPI_FILE_READ_AT (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_FILE_READ_AT(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read_at_all (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read_at_all(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read_at_all_ (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read_at_all_(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_read_at_all__ (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_read_at_all__(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void MPI_FILE_READ_AT_ALL (MPI_File *fh, MPI_Offset *offset, void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_FILE_READ_AT_ALL(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write_at (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write_at(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write_at_ (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write_at_(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write_at__ (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write_at__(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void MPI_FILE_WRITE_AT (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_FILE_WRITE_AT(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write_at_all (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write_at_all(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write_at_all_ (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write_at_all_(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void mpi_file_write_at_all__ (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  pmpi_file_write_at_all__(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void MPI_FILE_WRITE_AT_ALL (MPI_File *fh, MPI_Offset *offset, CONST void* buf, MPI_Fint *count, MPI_Fint *datatype, MPI_Status *status, MPI_Fint *ierror)
{
  extrae_lite_enter();
  PMPI_FILE_WRITE_AT_ALL(fh, offset, buf, count, datatype, status, ierror);
  extrae_lite_exit();
}

void pmpi_get (void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint*target_datatype, MPI_Fint* win, MPI_Fint* ierror)
{
  extrae_lite_enter();
  pmpi_get(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, ierror);
  extrae_lite_exit();
}

void pmpi_get_ (void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint*target_datatype, MPI_Fint* win, MPI_Fint* ierror)
{
  extrae_lite_enter();
  pmpi_get_(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, ierror);
  extrae_lite_exit();
}

void pmpi_get__ (void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint*target_datatype, MPI_Fint* win, MPI_Fint* ierror)
{
  extrae_lite_enter();
  pmpi_get__(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, ierror);
  extrae_lite_exit();
}

void PMPI_GET (void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint*target_datatype, MPI_Fint* win, MPI_Fint* ierror)
{
  extrae_lite_enter();
  PMPI_GET(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, ierror);
  extrae_lite_exit();
}

void pmpi_put (CONST void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint* target_datatype, MPI_Fint* win, MPI_Fint* ierror)
{
  extrae_lite_enter();
  pmpi_put(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, ierror);
  extrae_lite_exit();
}

void pmpi_put_ (CONST void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint* target_datatype, MPI_Fint* win, MPI_Fint* ierror)
{
  extrae_lite_enter();
  pmpi_put_(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, ierror);
  extrae_lite_exit();
}

void pmpi_put__ (CONST void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint* target_datatype, MPI_Fint* win, MPI_Fint* ierror)
{
  extrae_lite_enter();
  pmpi_put__(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, ierror);
  extrae_lite_exit();
}

void PMPI_PUT (CONST void *origin_addr, MPI_Fint* origin_count, MPI_Fint* origin_datatype, MPI_Fint* target_rank, MPI_Fint* target_disp, MPI_Fint* target_count, MPI_Fint* target_datatype, MPI_Fint* win, MPI_Fint* ierror)
{
  extrae_lite_enter();
  PMPI_PUT(origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, ierror);
  extrae_lite_exit();
}

void mpi_type_size (MPI_Fint *datatype, MPI_Fint *size, MPI_Fint *ret)
{
  extrae_lite_enter();
  pmpi_type_size(datatype, size, ret);
  extrae_lite_exit();
}

void mpi_type_size_ (MPI_Fint *datatype, MPI_Fint *size, MPI_Fint *ret)
{
  extrae_lite_enter();
  pmpi_type_size_(datatype, size, ret);
  extrae_lite_exit();
}

void mpi_type_size__ (MPI_Fint *datatype, MPI_Fint *size, MPI_Fint *ret)
{
  extrae_lite_enter();
  pmpi_type_size__(datatype, size, ret);
  extrae_lite_exit();
}

void MPI_TYPE_SIZE (MPI_Fint *datatype, MPI_Fint *size, MPI_Fint *ret)
{
  extrae_lite_enter();
  PMPI_TYPE_SIZE(datatype, size, ret);
  extrae_lite_exit();
}

