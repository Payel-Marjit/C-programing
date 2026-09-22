//WAP to calc. area & circumference of circle.
#include<stdio.h>
void main()
{
    float r,ar,cir;
    printf("Enter the Radius = ");
    scanf("%f",&r);
    ar=3.14*r*r;
    cir=2*3.14*r;
    printf("Area of Circ. = %.2f",ar);
    printf("\nCircumference of Circ. = %.2f",cir);
}