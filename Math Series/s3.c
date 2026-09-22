//wap to print 1 1/3! 1/5! 1/7! 1/9!.....1/n! & calc. the sum
#include<stdio.h>
void main()
 {
    int i,n,f=1;
    double s=0.0;
    printf("Enter the Range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        if(i%2!=0)
        {
          printf("1/%d ",f);
          s=s+1/(float)f;
        }
        
    }
    printf(" = %.2lf",s);
}
