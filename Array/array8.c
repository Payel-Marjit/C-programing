//WAP to take input into an array & print the array & find out the second max element
#include<stdio.h>
void main()
{
    int i,n,max,j,smax,k;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];// array create
    //input (store the data within the array)
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //output
    printf("Array List = ");
    for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
    //max search
    max=a[0];
    j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
          max=a[i];
          j=i;
        }
    }
    printf("\nMax. Element = %d Index = %d Position = %d",max,j,j+1);
    //second max
    if(j==0)
    {
      smax=a[1];
      k=1;
    }
    else
    {
      smax=a[0];
      k=0;
    }
    for(i=0;i<n;i++)
    {
      if(i!=j)
      {
        if(a[i]>smax)
        {
            smax=a[i];
            k=i;
        }
      }
    }
    printf("\nSecond Max. Element = %d Index = %d Position = %d",smax,k,k+1);
}