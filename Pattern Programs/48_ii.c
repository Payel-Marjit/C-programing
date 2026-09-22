/*
   A 
   B C
   D E F
   G H I J
*/
#include<stdio.h>
void main()
{
    char x='A';
    int i,j;
    for(i=1;i<=4;i++)
    {
      for(j=1;j<=i;j++)
      {
         printf("%c ",x);
         x++;
      }
      printf("\n");
    }
}