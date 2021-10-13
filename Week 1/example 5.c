#include <stdio.h>

int main()
{
    int i;
    float f;
    char c;
    double d;
    printf("enter the values of i,f,c,d\n");
    scanf("%d %f %c %lf",&i,&f,&c,&d);
    printf("i=%d\nf=%.2f\nc=%c\nd=%lf",i,f,c,d);

    return 0;
}

