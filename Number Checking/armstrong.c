/*
  Amnstrong or Armstrong No.
  153,370,371,407,1634
  407  -->  7^3 +0 ^3+4^3  =407
  1634  --> 4^4 + 3^4 +6^4 + 1^4
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
    }
    if(x==s)
      printf("%d is Armstrong No. ",x);
    else
      printf("%d is NOT Armstrong No. ",x);
}