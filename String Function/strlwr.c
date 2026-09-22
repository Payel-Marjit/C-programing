//WAP to convert upper to lower case by using S.D.F.
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20];
   printf("Enter the String = ");
   gets(x);
   printf("String = %s",x);
   strlwr(x);
   printf("\nString = %s",x);
}