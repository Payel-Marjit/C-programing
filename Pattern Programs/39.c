/*
   1 2 3 4 4 3 2 1
   1 2 3 * * 3 2 1
   1 2 * * * * 2 1
   1 * * * * * * 1

*/
#include<stdio.h>
void main()
{
        int i,j,sp,k=0;

    for(i=4;i>=1;i--,k++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);

        for(sp=1;sp<=2*k;sp++)
            printf("* ");

        for(j=i;j>=1;j--)
            printf("%d ",j);

        printf("\n");
    }

    k--;
}
