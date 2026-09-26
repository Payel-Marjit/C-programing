//WAP to create a menu driven calculator by using option (perfect)
#include<stdio.h>
void main()
{
    int ch,a,b;
    printf("Press 1 for Add\nPress 2 for Subtract\nPress 3 for Multiply\nPress 4 for Division\n");
    printf("Enter the Choice = ");
    scanf("%d",&ch);   
    switch(ch)
    {
        case 1:
             printf("Enter 2 No.  = ");
             scanf("%d%d",&a,&b);     
             printf("Addition = %d",a+b);
             break;
        case 2:
             printf("Enter 2 No.  = ");
             scanf("%d%d",&a,&b);     
             printf("Subtraction = %d",a-b);
             break;
        case 3:
             printf("Enter 2 No.  = ");
             scanf("%d%d",&a,&b);     
             printf("Multiplcation = %d",a*b);
             break;
        case 4:
             printf("Enter 2 No.  = ");
             scanf("%d%d",&a,&b);     
             printf("Division = %d",a/b);
             break;
        default:
             printf("Wrong Choice !!!");
    }
}