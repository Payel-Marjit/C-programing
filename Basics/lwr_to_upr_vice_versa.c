//WAP to convert from lower to upper or vice versa
#include<stdio.h>
void main()
{
    char x;
    printf("Enter the Letter = ");
    scanf("%c",&x);
    if(x>=65 && x<=90)   //if(x>='A' && x<='Z)
      printf("%c",x+32);
    else if(x>=97 && x<=122)
      printf("%c",x-32);
    else
      printf("%c",x);
}