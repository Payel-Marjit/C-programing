/*
wap to check a no. is twisted prime or not
EX:17,13,....
17 reverse 71 both are prime so 17,71 both are twisted prime no.
*/
#include<stdio.h>
void main()
{
    int i,n,rem,rev=0,x,f=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
        for(i=2;i<n;i++)
     {
        if(n%i==0)
        {
           f=1;
           break;
        }
     }
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("Reverese of %d is %d",x,rev);
        for(i=2;i<rev;i++)
     {
        if(rev%i==0)
        {
           f=1;
           break;
        }
    }
    if(f==0)
       printf("\n%d is a twisted prime no",x);
    else
       printf("\n%d is not a twisted prime no",x);
}