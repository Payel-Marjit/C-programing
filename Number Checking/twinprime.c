//WAP to check whether a no. is Twin prime or not
#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,m,f=0,g=0;
    printf("Enter 2 No. = ");
    scanf("%d%d",&n,&m);
    for(i=2;i<n;i++)
     {
        if(n%i==0)
        {
           f=1;
           break;
        }
     }
     for(i=2;i<m;i++)
     {
        if(m%i==0)
        {
           g=1;
           break;
        }
     }
    if((f==0 && g==0) && abs(n-m)==2)
      printf("%d & %d are Twin Prime No. ",n,m);
    else
      printf("%d & %d are NOT Twin Prime No. ",n,m);
}