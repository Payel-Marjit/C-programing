//WAP to calc. average of 3 no.
#include<stdio.h>
void main()
{
   int a,b,c,t,avg;
   printf("Enter 3 No. = ");
   scanf("%d%d%d",&a,&b,&c);
   t=a+b+c;
   avg=t/3;
   printf("Total = %d \nAverage = %d",t,avg);
}