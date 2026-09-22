/*
wap tp print
1 
3 1
5 3 1
7 5 3 1
9 7 5 3 1
*/
#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=9;i+=2)
   {
     for(j=i;j>=1;j-=2)
    {
          printf("%d ",j);
    }
      printf("\n");
   }
}