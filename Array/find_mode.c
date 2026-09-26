//wap to find out mode from an array list
#include<stdio.h>
void main()
{
    int i,n,j,count,max_count=0,mode;
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
for(i=0;i<n;i++)
{
  count=0;
    for(j=0;j<n;j++)
    {
      if(a[i]==a[j])
            count++;
    }

    if(count>max_count)
    {
        max_count=count;
        mode=a[i];
    }
}

printf("\nMode = %d",mode);      
}
