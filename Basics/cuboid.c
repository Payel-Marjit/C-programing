//WAP to calculate the surface area & volume of a cuboid
#include<stdio.h>
void main()
{
  int x,y,z;
  printf("enter the length of a cuboid=");
  scanf("%d",&x);
  printf("enter the breadth of a cuboid=");
  scanf("%d",&y);
  printf("enter the height of a cuboid=");
  scanf("%d",&z);
  printf("surface area of a cuboid=%d",(2*(x*y+y*z+z*x)));
  printf("\nvolume of a cuboid = %d",x*y*z);
}