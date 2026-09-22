/*
    1 
    1 1
    1 1 2
    1 1 2 3
*/
#include<stdio.h>
void main()
  {
    int a=1,b=0,i,j,s;
    for(i=1;i<=4;i++)
    {
    a=1,b=0;
    for(j=1;j<=i;j++)
    {
    s=a+b;
    printf("%d ",s);
    a=b;
    b=s;
    }
    printf("\n");
    }
  }