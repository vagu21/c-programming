/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* nested if-else*/
/*greatest between three numbers*/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the value of three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if(a>c)
        printf("%d is the big\n",a);
        else 
        printf("%d is the big\n",c);
        
    }
     else{
         if (b>c)
         printf("%d is big\n",b);
         else 
         printf("%d is the big\n",c);
     }
    return 0;
}

