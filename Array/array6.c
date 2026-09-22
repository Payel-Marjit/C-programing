//find out the max. element within the array(Perfect)
#include<stdio.h>
void main()
{
    int i,n,max,j;
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
    max=a[0];
    j=0;
    printf("\nArray List = \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        if(a[i]>max)
        {
            max=a[i];
            j=i;
        }
    }
    printf("\n Max. Element = %d Index= %d position = %d",max,j,j+1);
    
}