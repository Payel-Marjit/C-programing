//WAP to calc. area & perimeter of Rect.
#include<stdio.h>
void main()
{
   int len,br,ar,pr;
   printf("Enter the Length & Breadth = ");
   scanf("%d%d",&len,&br);
   ar=len*br;
   pr=2*(len+br);
   printf("Area = %d Perimeter = %d",ar,pr);
}