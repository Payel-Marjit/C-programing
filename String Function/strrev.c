//WAP to reverse the string by using S.D.F.
#include<stdio.h>
#include<string.h>
void main()
{
    char x[20];
    printf("Enter the String = ");
    gets(x);
    printf("Original String = %s",x);
    strrev(x);
    printf("\nReverse String = %s",x);
}