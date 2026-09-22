//WAP to copy a string from another string  by using S.D.F. strdup()
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20],*y[20];
   printf("Enter the String = ");
   gets(x);
   *y=strdup(x);
   printf("After copy 2nd String = %s",*y);
}