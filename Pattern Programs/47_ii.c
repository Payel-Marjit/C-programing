/*
   A B C D
   A B C 
   A B
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
         printf("%c ",j);
      }
      printf("\n");
    }
}