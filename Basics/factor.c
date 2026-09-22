//wap to calc factor of a number 
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the no=");
    scanf("%d",&n);
    printf("Factors of %d are =",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
}
