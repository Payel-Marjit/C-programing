/*
 wap to check a no. is harshad or not (the no. divisible by the s.o.d of that no)
 72=2+7=9(72 divisible by 9)
*/
#include<stdio.h>
void main()
{
        int n,rem,sum=0,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        sum=sum+rem;
    }    
    if(x%sum==0)
     printf("%d is a harshad no.",x);
    else
    printf("%d is not a harshad no.",x);
}
        