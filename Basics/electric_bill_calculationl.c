//WAP to calculate Electric Bill Calc.
#include<stdio.h>
void main()
{
    int unit,rs;
    printf("Enter the Unit = ");
    scanf("%d",&unit);
    if(unit>=0 && unit<=100)
      rs=unit*1;
    else if(unit>100 && unit<=200)
      rs=(unit-100)*3+100;
    else if(unit>200 && unit<=400)
      rs=(unit-200)*5+400;
    else if(unit>400 && unit<=800)
      rs=(unit-400)*7+1400;
    else
      rs=(unit-800)*10+4200;
    printf("Your Bill Amount = %d",rs);
}