//WAP to swap 2 no. without using 3rd variable
#include<stdio.h>
void main(){
    int a=10,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("First number is now %d\nSecond number is now %d",a,b);
}