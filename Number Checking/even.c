//WAP to check a no. is even or not
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    if(x==0)
      printf("%d is Neutral No.",x);
    else if(x%2==0)
      printf("%d is Even No.",x);
    else
      printf("%d is ODD No.",x);
}