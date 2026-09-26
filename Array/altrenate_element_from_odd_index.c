//WAP to print alternate element from odd index
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
    //altenate element(odd index)
    printf("\nOdd Element = ");
    for(i=1;i<n;i+=2)
    {
       printf("%d ",a[i]);
    }
  }