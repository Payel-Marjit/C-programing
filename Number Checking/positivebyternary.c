//Positive No. by using ternary operator
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    (x>0)?printf("%d is Positive No.",x):(x==0)?printf("%d is Neutral No",x):printf("%d is Negative No",x);
}