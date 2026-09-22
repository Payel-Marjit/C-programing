//WAP to reverse array element
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
    //reverse array
    printf("\n Reverse List = ");
    for(i=n-1;i>=0;i--)
      printf("%d ",a[i]);
}