/*
   - - - - 1
   - - - 2 1
   - - 3 2 1
   - 4 3 2 1
   5 4 3 2 1
*/
#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=5;i++)
    {
      for(sp=4;sp>i-1;sp--)
      {
      printf("  ");
      }
      for(j=i;j>=1;j--)
      {
         printf("%d ",j);
      }
      printf("\n");
    }
}