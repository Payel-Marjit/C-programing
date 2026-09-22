//Sum of digit of a no.
#include<stdio.h>
void main()
{
    int n,rem,s=0,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
    }
    printf("Sum of Digit of %d is %d",x,s);
}