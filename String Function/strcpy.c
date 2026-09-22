//WAP to copy a string by using S.D.F.
#include<stdio.h>
#include<string.h>
void main()
{
    char x[20],y[20]="";
    printf("Enter the String = ");
    gets(x);
    printf("\nBefore Copy 1st String = %s",x);
    printf("\nBefore Copy 2nd String = %s",y);
    strcpy(y,x);
    printf("\nAfter Copy 1st String = %s",x);
    printf("\nAfter Copy 2nd String = %s",y);
}