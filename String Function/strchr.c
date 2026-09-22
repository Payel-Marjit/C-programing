//WAP to check whether a character is present within a string or not by using S.D.F.
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20],y,*t;
   printf("Enter the String = ");
   gets(x);
   printf("Enter the character to be searched for = ");
   scanf("%c",&y);
   t=strchr(x,y);
   if(t!=NULL)
     printf("%c is Found ",y);
   else
     printf("%c is NOT Found ",y);
}