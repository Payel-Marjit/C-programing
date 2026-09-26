//WAP GCD and LCM
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
    lcm=(a*b)/gcd;
    printf("Gcd of %d & %d is = %d\n",a,b,gcd);
    printf("LCM of %d & %d is = %d\n",a,b,lcm);
}