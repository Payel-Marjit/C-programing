/* wap to check a no. is palindrom or not(reverse of a no.== no.)
    EX:171,151,111,656 etc....
*/
#include<stdio.h>
void main()
{
    int n,rem,rev=0,x;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
        if(x==rev)
        printf("%d is a palindrom no.",x);
        else
        printf("%d is not palindrom no.",x);
    
}