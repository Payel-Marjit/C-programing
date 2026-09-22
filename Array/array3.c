//Sum of the array element & calc. the avg.
#include<stdio.h>
void main()
{
    int i,n,s=0,avg;
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
    printf("\nArray List = \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        s=s+a[i];
    }
    printf(" = %d",s);
    avg=s/n;
    printf("\n Average = %d",avg);
}