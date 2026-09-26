//WAP to convert second to Hour
#include<stdio.h>
void main()
{
   int s,h,m;
   printf("Enter the Second = ");
   scanf("%d",&s);
   h=s/3600;
   s=s%3600;
   m=s/60;
   s=s%60;
   printf("Hour =%d Minute = %d Second =%d",h,m,s);
}