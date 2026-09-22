//WAP to find out all element except middle element
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
    //except middle element
    printf("\nall element except middle element= "); 
    for(i=0;i<n;i++)
    {
      if(i!=n/2)
        printf("%d ",a[i]);
    }
  }