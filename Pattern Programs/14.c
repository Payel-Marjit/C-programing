/*
wap tp print
4
3 3
2 2 2 
1 1 1 1
*/
#include<stdio.h>
void main()
{
  int i,j;
  for(i=4;i>=1;i--)
   {
     for(j=i;j<=4;j++)
    {
          printf("%d ",i);
    }
      printf("\n");
   }
}