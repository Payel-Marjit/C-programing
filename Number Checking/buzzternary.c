//WAP to check a no. buzz or not [BY TERNAEY]
#include<stdio.h>
void main()
{
    int x;
    printf("enter a no.=");
    scanf("%d",&x);
    (x%7==0 && x%10==7)?printf("%d is a buzz number",x):printf("%d is not a buzz number",x);
}                                         