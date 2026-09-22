/*
    D 
    D C
    D C B
    D C B A
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=68;i>=65;i--)
    {
        for(j=68;j>=i;j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}