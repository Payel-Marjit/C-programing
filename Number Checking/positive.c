//WAP to check a no. is positive or not
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    if(x>0)
      printf("%d is Positive No.",x);
    else if(x==0)
      printf("%d is Neutral No.",x);
    else
      printf("%d is Negative No.",x);
}