//Interest calc.
#include<stdio.h>
void main()
{
  char x;
  int accbal,interest;
  printf("Enter the Gender = ");
  scanf("%c",&x);
  printf("Enter the Account Balance = ");
  scanf("%d",&accbal);
    if ((x=='m' || x=='M') && accbal>5000){
        interest=(accbal*2)/100;
        printf("Your Interest = %d Your Current Balance = %d",interest,accbal+interest);
    } 
    else if ((x=='f'|| x=='F') && accbal>3000){
        interest=(accbal*5)/100;
        printf("Your Interest = %d Your Current Balance = %d",interest,accbal+interest);

    } 
    else if ((x=='t' || x=='T') && accbal>2000){
        interest=(accbal*8)/100;
        printf("Your Interest = %d Your Current Balance = %d",interest,accbal+interest);

    } 
    else {
        printf("\nNo interest applied based on the conditions.\n");
    }
}