/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int num1, num2, num3;
  printf ("enter the values of three numbers\n");
  scanf ("%d%d%d", &num1, &num2, &num3);
  printf ("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", num1, num2,
	  num3);
  if ((num1 > num2) && (num1 > num3))
    printf ("%d is the first number is highest among three", num1);
  if ((num2 > num3) && (num2 > num1))
    printf ("%d is the second number is highest among three", num2);
  if ((num3 > num1) && (num3 > num2))
    printf ("%d is the third number is highest among three", num1);





  return 0;
}

