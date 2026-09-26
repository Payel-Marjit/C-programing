//WAP to convert second to day
#include<stdio.h>
void main()
{
   int d,m,h,s;
   printf("Enter the second = ");
   scanf("%d",&s);
   d=s/86400;
   s=s%86400;
   h=s/3600;
   s=s%3600;
   m=s/60;
   s=s%60;
   printf("day=%d Hour =%d Minute = %d Second =%d",d,h,m,s);
}                                                   