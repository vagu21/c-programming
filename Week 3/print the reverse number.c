/************************************


****************************************/
#include<stdio.h>
int
main ()
{
  int n, rem;
  printf ("Enter a number to reversed:");
  scanf ("%d", &n);
  printf ("The reverse number is");
  while (n != 0)
    {
      rem = n % 10;
      printf ("%d", rem);
      n = n / 10;
    }



  return 0;
}

