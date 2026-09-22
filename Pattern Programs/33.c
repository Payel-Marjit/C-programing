/*
    - - - *
    - - * * *
    - * * * * * 
    * * * * * * *
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
            printf("* ");
        } 
        printf("\n");
    }
}