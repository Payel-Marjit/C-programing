//WAP to check a no. is even or not [BY TERNAEY]
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    (x==0)?printf("%d is Neutral No.",x):(x%2==0)?printf("%d is Even No.",x):printf("%d is ODD No.",x);
}
