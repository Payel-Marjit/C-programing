//WAP to convert min to hour
#include<stdio.h>
void main()
{
   int m,h;
   printf("Enter the minute = ");
   scanf("%d",&m);
   h=m/60;
   m=m%60;
   printf("Hour =%d Minute = %d",h,m);
}                                   