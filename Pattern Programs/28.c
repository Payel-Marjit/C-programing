/*
   _ _ _ *
   _ _ *   *
   _ *   *   *
   *   *   *   *
   _ *   *   * 
   _ _ *   *
   _ _ _ *         
*/
#include<stdio.h>
void main()
{
    int i,j,sp,n;
    printf("enter the range= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=n-1;sp>=i;sp--)
       {
        printf("  ");
       }
       for(j=1;j<=i;j++)
       {
        printf("*   ");
       }
       printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(sp=i;sp<=n-1;sp++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*   ");
        }
        printf("\n");
    }
}