//factorial No. 
#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
 //       printf("Factorial of %d is %d\n",i,f);
    }
    printf("Factorial of %d is %d\n",n,f);
}