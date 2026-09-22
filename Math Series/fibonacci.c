//0 1 1 2 3 5 8 ---n
#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,s;
    printf("Enter the Range = ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1;i<=n-2;i++)
    {
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
    }
}