//WAP to add,sub,multiply,division of 2 no.
#include<stdio.h>
void main()
{
   int a,b,s;
   printf("Enter the 1st No. = ");
   scanf("%d",&a);
   printf("Enter the 2nd No. = ");
   scanf("%d",&b);
   s=a+b;
   printf("Addition of %d & %d is = %d",a,b,s);
   printf("\nSubtraction = %d",a-b);
   printf("\nMultiplication = %d\n",a*b);
   printf("Division = %d",a/b);
}