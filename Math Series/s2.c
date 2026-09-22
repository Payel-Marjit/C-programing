//wap to print 2/3 4/5 8/7 16/9.....n & calc. the sum
#include<stdio.h>
void main()
{
    int i,n,j=2,k=3;
    float sum=0.0;
    printf("enter the range=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d/%d ",j,k);;
        sum=sum+((float)j/(float)k);
        j=j*2;
        k=k+2;
    }
    printf("=%.2f",sum);
}