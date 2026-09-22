/* neon no. 
   0,1,9
   9--> 9^2= 81   1+8=9 
   6=6^2=36  6+3=9  (NOT)*/
#include<stdio.h>
void main()
{
    int n,sq,rem,s=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(sq=n*n;sq>0;sq=sq/10)
    {
        rem=sq%10;
        s=s+rem;
    }
    if(n==s)
      printf("%d is Neon No. ",n);
    else
      printf("%d is NOT Neon No. ",n);
}