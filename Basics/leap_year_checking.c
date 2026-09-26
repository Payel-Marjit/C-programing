//WAP to check a year leap year or not 
#include<stdio.h>
void main()
{
    int x;
    printf("enter a year.=");
    scanf("%d",&x);
    if ((x%400==0)||((x%4==7) && (x%100!=0)))
      printf("%d is a leap year",x);
    else
      printf("%d is not a leap year",x);
}                                                                                                                                                            