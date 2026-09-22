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
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 || i==5)
            printf("1 ");
            else if(j==1 || j==5)
            printf("1 ");
            else
            printf("  ");
        }
        printf("\n");
    }
    
}