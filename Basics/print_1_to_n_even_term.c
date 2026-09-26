//WAP to print 1 to n even term
#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("enter the no.=");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d ",i);
        s=s+i;
    }
    printf("= %d",s);
}