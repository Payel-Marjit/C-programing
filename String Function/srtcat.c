//WAP to concatenate a string by using S.D.F.
#include<stdio.h>
#include<string.h>
void main()
{
    char x[20],y[20];
    printf("Enter the 1st String = ");
    gets(x);
    printf("Enter the 2nd String = ");
    gets(y);
    printf("\nBefore Concatenate 1st String = %s",x);
    printf("\nBefore Concatenate 2nd String = %s",y);
    strcat(x,y);
    printf("\nAfter Concatenate 1st String = %s",x);
    printf("\nAfter Concatenate 2nd String = %s",y);
 
}