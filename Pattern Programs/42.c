/*
    1
    2 3 2
    4 5 6 5 4
    7 8 9 10 9 8 7
*/
#include<stdio.h>
void main()
{
    int i,j,k=1,p;
    for(i=1;i<=4;i++)
    {
     p=k;
        for(j=1;j<=i;j++)
    {
        printf("%d ",k);
        k++;
    }
    for(j=k-2;j>=p;j--)
    {
        printf("%d ",j);
    }
    printf("\n");
    }
}