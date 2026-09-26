//WAP to print the day
#include<stdio.h>
void main()
{
    int d;
    printf("Enter the No. = ");
    scanf("%d",&d);
    switch(d)
    {
        case 1:   //if(d==1)
              printf("Monday");
              break;
        case 2:
              printf("Tuesday");
              break;
        case 3:
              printf("Wednesday");
              break;
        case 4:
              printf("Thursday");
              break;
        case 5:
              printf("Friday");
              break;
        case 6:
              printf("Saturday");
              break;
        case 7:
              printf("Sunday");
              break;
        default:
             printf("Wrong Choice!!!");
    }
}