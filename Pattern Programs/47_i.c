/*
   A
   A A
   A A A
   A A A A
*/
#include<stdio.h>
void main()
{
     int i,j;
    for(i=1;i<=4;i++)
    {
      for(j=1;j<=i;j++)
      {
         printf("A ");
      }
      printf("\n");
    }
}