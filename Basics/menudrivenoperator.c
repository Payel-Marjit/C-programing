//WAP to create a menu driven calculator by using option (perfect)
#include<stdio.h>
void main()
{
    char ch;
    int a,b;
    printf("Press '+' or Add\nPress '-' for Subtract\nPress '*' for Multiply\nPress '/' for Division\n");
    printf("Enter the Choice = ");
    scanf("%c",&ch);   
    switch(ch)
    {
        case '+':
             printf("Enter 2 No.  = ");
             scanf("%d%d",&a,&b);     
             printf("Addition = %d",a+b);
             break;
        case '-':
             printf("Enter 2 No.  = ");
             scanf("%d%d",&a,&b);     
             printf("Subtraction = %d",a-b);
             break;
        case '*':
             printf("Enter 2 No.  = ");
             scanf("%d%d",&a,&b);     
             printf("Multiplcation = %d",a*b);
             break;
        case '/':
             printf("Enter 2 No.  = ");
             scanf("%d%d",&a,&b);     
             printf("Division = %d",a/b);
             break;
        default:
             printf("Wrong Choice !!!");
    }
}