/*
wap tp print
1 3 5 7 9
3 5 7 9
5 7 9
7 9
9
*/
#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=9;i+=2)
   {
     for(j=i;j<=9;j+=2)
    {
          printf("%d ",j);
    }
      printf("\n");
   }
}