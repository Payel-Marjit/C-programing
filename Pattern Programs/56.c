/*
D 
C C
B B B 
A A A A
*/
#include<stdio.h>
int main()
{
     int i,j;
    for(i=68;i>=65;i--)
    {
      for(j=68;j>=i;j--)
      {
         printf("%c ",i);
      }
      printf("\n");
    }
    return 0;
}