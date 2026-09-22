/*
  Perfect No.
    6 ---> 1,2,3  s.o.f. ==no
*/
#include<stdio.h>
void main()
{
    int i,n,s=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
          printf("%d ",i);
          s=s+i;
        }
    }
    if(n==s)
      printf("\n%d is Perfect No.  ",n);
    else
      printf("\n%d is NOT Perfect No.  ",n);

}