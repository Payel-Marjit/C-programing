/*
   1 
   2 3
   3 4 5
   4 5 6 7
   5 6 7 8 9
*/
#include<stdio.h>
void main()
{
    int i,j,k=1;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=(2*i)-1;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}