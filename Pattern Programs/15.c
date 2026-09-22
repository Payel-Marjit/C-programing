/*
wap tp print
4 4 4 4
3 3 3
2 2
1
*/
#include<stdio.h>
void main()
{
  int i,j;
  for(i=4;i>=1;i--)
   {
     for(j=1;j<=i;j++)
    {
          printf("%d ",i);
    }
      printf("\n");
   }
}