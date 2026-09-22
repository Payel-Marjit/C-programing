/*
    1 
    2 3 4 
    5 6 7 8 9
*/
#include<stdio.h>
void main()
{
    int i,j=1;
    for(i=1;i<=3;i++)
    {
        for(j;j<=i*i;j++)
        {
        printf("%d ",j);
        }
    printf("\n");
    }
}