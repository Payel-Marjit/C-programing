//WAP to print 1 to n odd term and calc sum
#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("enter the no.=");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("%d ",i);
        s=s+i;
    }
    printf("= %d",s);
}