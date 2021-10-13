
#include <stdio.h>

int main()
{
    int x1,x2,x3,x4,x5,tot;
    int aggr;
    printf("enter marks of 5 subjects\n");
    scanf("%d %d %d %d %d",&x1,&x2,&x3,&x4,&x5);
    tot=x1+x2+x3+x4+x5;
    printf("total marks=%d\n",tot);
    aggr=tot/5;
    printf("Aggregate = %d\n",aggr);
if(aggr>=80)
printf("Grade: Excellent\n");
else if (aggr>=75)
printf("Grade: First class with Distinction"); 
else if(aggr>=60)
printf(" Grade : First Class");
else if(aggr>=50)
printf("Grade : Second Class");
else if(aggr>=40)
printf("Grade : Pass class");
else
printf("Grade: Fail");
return 0;
}
    


