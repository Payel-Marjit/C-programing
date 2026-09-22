/*
wap to check a no. is kaprekar or not
EX:45,99,297 etc....
45*2=2025=25+20=45
*/
#include<stdio.h>
void main()
{
    int n,i,s=0,rem,x,sq,c=0,left,right,m=1;
    printf("enter the no.=");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        c++;
    }
     sq=x*x;
     for(i=1;i<=c;i++)
    {
        m=m*10;
    }

    left=sq/m;
    right=sq%m;

    if(left+right==x)
        printf("%d is Kaprekar No.",x);
    else
        printf("%d is NOT Kaprekar No.",x);
}

