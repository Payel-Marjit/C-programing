/*
wap to check a no. is disarium or not
EX: 89,135 etc...
89=9^2+8^1=81+8=89 ;      135=5^3+3^2+1^1=135
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,rem,p,s=0,c=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        c++;
    }
    for(n=x;n>0;n=n/10)
    {
        rem=n%10;
        p=pow(rem,c);
        s=s+p;
        c--;
    }
    if(x==s)
      printf("%d is disarium no. ",x);
    else
      printf("%d is NOT disarium mo. ",x);
}