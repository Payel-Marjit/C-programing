//WAP to take input into an array & print the array & find out the second min element
#include<stdio.h>
void main()
{
    int i,n,min,j,smin,k;
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
    //min search
    min=a[0];
    j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
          min=a[i];
          j=i;
        }
    }
    printf("\nMin. Element = %d Index = %d Position = %d",min,j,j+1);
    //second min
    if(j==0)
    {
      smin=a[1];
      k=1;
    }
    else
    {
      smin=a[0];
      k=0;
    }
    for(i=0;i<n;i++)
    {
      if(i!=j)
      {
        if(a[i]<smin)
        {
            smin=a[i];
            k=i;
        }
      }
    }
    printf("\nSecond Min. Element = %d Index = %d Position = %d",smin,k,k+1);
}