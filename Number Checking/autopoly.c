//WAP to Check whether a no. is Autopolymorphic no. or not 
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    if(x==0)
      printf("%d is Neutral No.",x);
    else if((x*x)%10==x || (x*x)%100==x || (x*x)%1000==x)
      printf("%d is Autopolymorphic No. ",x);
    else
      printf("%d is NOT Autopolymorphic No. ",x);
}



/*autopolymorphic=5,6,25,76,376....*/