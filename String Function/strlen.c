//WAP to calc. the length of a string by using S.D.F/L.F/I.F.
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20];
   printf("Enter the String = ");
   gets(x);
   printf("String = %s",x);
   printf("\nLength = %d",strlen(x));
}