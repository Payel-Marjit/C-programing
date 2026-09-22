/*
wap to check a no is co-prime or not
gcd should be 1
*/
#include<stdio.h>
void main()
{
    int i,a,b,gcd,lcm;
    printf("Enter 2 No. = ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
          gcd=i;
    }
    printf("Gcd of %d & %d is = %d\n",a,b,gcd);
    if(gcd==1)
      printf("%d & %d are co-prime no.",a,b);
    else
      printf("%d & %d are not co-prime no.",a,b);
}    