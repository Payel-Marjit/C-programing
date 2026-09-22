//WAP to check greater between 2 No.
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 NO. = ");
    scanf("%d%d",&a,&b);
    if(a>b)
       printf("1st No. %d is Greater",a);
    else if(a==b)
       printf("Both are Equal");
    else
       printf("2nd No. %d is Greater",b);
}