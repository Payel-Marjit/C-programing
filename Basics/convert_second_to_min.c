//WAP to convert second to minute
#include<stdio.h>
void main()
{
    int s,m;
    printf("Enter the Second = ");
    scanf("%d",&s);
    m=s/60;
    s=s%60;
    printf("Minute = %d Second = %d",m,s);
}