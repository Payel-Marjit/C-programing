//Reverse of a no.
#include<stdio.h>
void main()
{
    int n,rem,rev=0,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("Reverese of %d is %d",x,rev);
}