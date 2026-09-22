/*
    1 
    0 0 
    1 1 1 
    0 0 0 0 
    1 1 1 1 1
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%i ",i%2);
        }
        printf("\n");
    }
}