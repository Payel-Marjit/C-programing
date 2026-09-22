/*
    A
    B B
    C C C 
    D D D D
*/
#include<stdio.h>
void main()
{
   int i,j;
    for(i=65;i<=68;i++)
    {
       for(j=65;j<=i;j++)
       {
       printf("%c ",i);
       }
       printf("\n");
    }
}