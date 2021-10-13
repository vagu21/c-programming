#include <stdio.h>

int main()
{
    float c,f;
    printf("enter the temperature in celsius\n");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("temperature in farenheit:%0.3f",f);
     return 0;
}


