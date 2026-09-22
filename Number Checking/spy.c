/*
wap to check a no. is spy or not(sum of digit== product of digit)
EX: 123: 3+2+1==3*2*1, 1421: 1+2+4+1==1*4*2*1
*/
#include<stdio.h>
void main()
{
    int n,rem,sum=0,pd=1,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        sum=sum+rem;
        pd=pd*rem;
    }    
    if(sum==pd)
    printf("%d is a spy no.",x);
    else
    printf("%d is not a spy no.",x);
}