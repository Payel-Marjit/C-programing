//find out the min. element within the array
    #include<stdio.h>
    void main()
    {
        int i,n,min,j;
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
        min=a[0];
        j=0;
        for(i=03;i<n;i++)
        {
            printf("%d ",a[i]);
            if(a[i]<min)
            {
                min=a[i];
                j=i;
            }
        }
        printf("\n min. Element = %d Index= %d position = %d",min,j,j+1);
        
    }