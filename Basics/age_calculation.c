//WAP to calculate age
#include<stdio.h>
void main()
{
    int age;
    printf("enter the age =");
    scanf("%d",&age);
    if (age>=0 && age<=6)
      printf("%d year old called INFANT",age);
    else if(age>6 && age<=12) 
      printf("%d year old called CHILD",age);
    else if(age>12 && age<=18) 
      printf("%d year old called TEENAGE",age);
    else if(age>18 && age<=35) 
      printf("%d year old called YOUNG AGE",age);
    else if(age>35 && age<=60) 
      printf("%d year old called MIDDLE AGE",age);
    else if(age>60 && age<=100) 
      printf("%d year old called OLD AGE",age);
    else if(age>100)
      printf("Go to Hell!!!");
    else
      printf("N/A");
}
