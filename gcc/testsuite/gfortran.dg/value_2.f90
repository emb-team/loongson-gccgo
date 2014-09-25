! { dg-do compile }
! { dg-options "-std=f95" }
! Tests the standard check in the patch for PR29642, which requested the
! implementation of the F2003 VALUE attribute for gfortran.
!
! Contributed by Paul Thomas  <pault@gcc.gnu.org> 
!
program test_value
  integer(8) :: i = 42

  call bar (i)
  if (i /= 42) call abort ()
contains
  subroutine bar (i)
    integer(8) :: i
    value :: i      ! { dg-error "Fortran 2003: VALUE" }
    if (i /= 42) call abort ()
    i = 99
    if (i /= 99) call abort ()
  end subroutine bar
end program test_value
