#include<stdio.h>

int main()
{
int a;
a=12345;
printf("%d\n",a);
printf("%3d\n",a);
printf("%7d\n",a);
printf("%-7d\n",a);
    
int b;
b=123.45;
printf("%f\n",123.45);
printf("%4.2f\n",123.45);
printf("%9.3d\n",12345);


printf("%s","Hello World");	
printf("%6.3s\n","Hello World");
printf("%1.3s","Hello World"); 

    
    return 0;
    
}
