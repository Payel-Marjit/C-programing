//wap to fimd out median from an array......
#include<stdio.h>
void main()
{
    int i,n,j,temp;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n]; //array declaration
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //print
    printf("\nArray List = ");
    for(i=0;i<n;i++)
       printf("%d ",a[i]);
    //sorting
    for(i=0;i<n-1;i++)
    {
    for(j=i+1;j<n;j++)
        if(a[i]>a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
    } 
    printf("\nSorted Array = ");
      for(i=0;i<n;i++)
        printf("%d ",a[i]); 
// Median calc...
    if(n%2==1)
       printf("\nMedian = %d",a[n/2]);
    else
       printf("\nMedian = %.2f",(a[n/2]+a[(n/2)-1])/2.0);
 
}       