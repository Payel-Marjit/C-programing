//WAP to compare 2 string by using S.D.F.
#include<stdio.h>
#include<string.h>
void main()
{
    char x[20],y[20];
    int i;
    printf("Enter the 1st String = ");
    gets(x);
    printf("Enter the 2nd String = ");
    gets(y);
    i=strcmp(x,y);
    if(i==0)
      printf("String Matched");
    else
      printf("String NOT Matched");
}