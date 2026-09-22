/*
   A A A A
   B B B
   C C
   D
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=65;i<=68;i++)
    {
      for(j=68;j>=i;j--)
      {
         printf("%c ",i);
      }
      printf("\n");
   }
}