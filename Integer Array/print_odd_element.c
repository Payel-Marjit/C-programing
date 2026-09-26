//WAP to print odd element from an array
#include<stdio.h>
void main()
{
    int i,n;
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
    //odd element
    printf("\nOdd Element = ");
    for(i=0;i<n;i++)
    {
       if(a[i]%2!=0)
         printf("%d ",a[i]);
    }
  }