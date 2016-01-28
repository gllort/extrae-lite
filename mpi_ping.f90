         PROGRAM pi_instrumented

         USE, INTRINSIC :: ISO_C_BINDING, ONLY: C_CHAR, C_NULL_CHAR, &
           C_PTR, C_LOC
         IMPLICIT NONE

         INTEGER ierr 
         INTEGER, PARAMETER :: n = 1000000
         INTEGER*8, PARAMETER, DIMENSION(2) :: values = (/ 0, 1 /)
         REAL*8, PARAMETER :: PI25DT = 3.141592653589793238462643
         CHARACTER(KIND=C_CHAR,LEN=20) :: next_phase_name = &
           "next_phase" // C_NULL_CHAR

         INTEGER :: it
         REAL*8 :: pi, h, area, x

         CALL mpi_init(ierr)

         h = 1.0 / n

         CALL extrae_lite_next_phase( next_phase_name )
         DO it=0, 9
             area = pi_kernel (n, h)
         END DO
         pi = h * area

         WRITE(*,"(A,F20.16,A,F20.16)") "pi is approximately", pi, &
           "Error is", ABS(pi - PI25DT)

         call mpi_finalize(ierr)

         CONTAINS

         REAL*8 FUNCTION pi_kernel( n, h )
         IMPLICIT NONE

         INTEGER, INTENT(IN) :: n
         REAL*8, INTENT(IN) :: h

         INTEGER :: i
         REAL*8 :: x, tmp

         tmp = 0

         DO i=1, n
             x = h * (i - 0.5)
             tmp = tmp + (4.0 / (1.0 + x*x))
         END DO

         pi_kernel = tmp
         RETURN
         END FUNCTION

         END PROGRAM
