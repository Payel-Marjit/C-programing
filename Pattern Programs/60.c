/*
  wap to ptint..........
     1 1 1 1 1
     1 - - - 1
     1 - - - 1
     1 - - - 1
     1 1 1 1 1
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(i==5)
            printf("1 ");
            else if(i!=5 && j==1)
            printf("1 ");
            else
            printf("  ");
        }
        for(j=4;j>=i;j--)
        {
            if(i==1)
            printf("1 ");
            else if(j==i)
            printf("1 ");
            else
            printf("  ");
        }
        printf("\n");
    }
    
}