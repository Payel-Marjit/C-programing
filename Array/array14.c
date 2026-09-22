//WAP to find out the middle element from an array
#include<stdio.h>
void main()
{
    int i,n,f=0,ser,j,mid;
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
    if(n%2==1)
      printf("Middle Element = %d",a[n/2]);
    else
    {
         
        printf("Middle Element = %.2f",(a[n/2]+a[(n/2)-1])/2.0);
    }
}