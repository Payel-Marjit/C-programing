//WAP to find out the mean element from an array
#include<stdio.h>
void main()
{
    int i,n,max,j,k=0,s=0;
    float mean;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n]; //array declaration
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
        k++;
    }
    //print
    printf("\nArray List = ");
    for(i=0;i<n;i++)
       printf("%d ",a[i]);
    //Mean Calc.
    for(i=0;i<n;i++)
    {
        s=s+a[i];   
    }
    mean=(float)s/k;
       
    printf("\nmean = %.2f",mean);
}