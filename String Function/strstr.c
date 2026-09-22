//WAP to check whether a substring is present within a string or not by using S.D.F.
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20],y[20],*t;
   printf("Enter the String = ");
   gets(x);
   printf("Enter the String to be searched for = ");
   gets(y);
   strupr(x);
   strupr(y);
   t=strstr(x,y);
   if(t!=NULL)
     printf("%s is Found ",y);
   else
     printf("%s is NOT Found ",y);
}