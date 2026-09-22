/*
    - - - 1
    - - 1 2 1
    - 1 2 3 2 1
    1 2 3 4 3 2 1
 */
#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=4;i++)
    {
        for(sp=3;sp>=i;sp--)
        {
            printf("  ");
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("%d ",j)
        } 
        printf("\n");
    }
}