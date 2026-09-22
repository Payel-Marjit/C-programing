/*
   D D D D
   C C C
   B B
   A
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=68;i>=65;i--)
    {
      for(j=65;j<=i;j++)
      {
         printf("%c ",i);
      }
      printf("\n");
    }
}