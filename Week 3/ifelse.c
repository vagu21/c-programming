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
  int num1, num2;
  
  printf("enter the values of number1 and number2\n");
  scanf("%d %d", &num1, &num2);
  
  if (num1 == num2)
     printf("number1 and number2 are equal\n");
  else
     printf("number1 and number2 are not equal\n");

  return 0;
}

