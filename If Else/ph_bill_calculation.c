//WAP to calculate phone Bill Calc.
#include<stdio.h>
void main()
{
    int unit,rs;
    printf("Enter the Unit = ");
    scanf("%d",&unit);
    if(unit>=0 && unit<=100)
      rs=unit*1;
    else if(unit>100 && unit<=200)
      rs=(unit-100)*4+100;
    else if(unit>200 && unit<=400)
      rs=(unit-200)*8+500;
    else if(unit>400 && unit<=800)
     rs=(unit-400)*10+2100;
    else
      rs=(unit-800)*12+6100;
    printf("Your Bill Amount = %d",rs);
}                                                                                                                                                          