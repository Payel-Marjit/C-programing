/* wap to check a no. is magic no. or not (s.o.d must be 10) 
EX: 19=9+1=10, 721=1+2+7=10 etc.....
*/
#include<stdio.h>
void main()
{
        int n,rem,sum=0,x,y,rem1,sum1=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        sum=sum+rem;
    }
    for(y=sum;sum>0;sum=sum/10)
    {
        rem1=sum%10;
        sum1=sum1+rem1;
    }     
      // printf("%d %d",y,sum1);
    if(sum1==1)
     printf("%d is a magic no.",x);
    else
     printf("%d is not a magic no.",x);
}
  






/*Magic No. 
  19,28,37,46,55,73,181,172,163
  172   -> 2+7+1=10
  10 --> 0+1   =1
  */
  /*
#include<stdio.h>
void main()
{
    int n,x,rem,s=0,s1=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    if(n<=0)
     printf("Wrong Input ");
    else
    {
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
    }
    for(;s>0;s=s/10)
    {
        rem=s%10;
        s1=s1+rem;
    }
    if(s1==1)
      printf("%d is Magic No. ",x);
    else
      printf("%d is NOT Magic No. ",x);
    }
}
*/