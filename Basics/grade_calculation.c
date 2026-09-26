//WAP to calculate grade
#include<stdio.h>
void main()
{ 
  int phy,chem,math,cs,t,avg;
  char grd;
  printf("PHYSICS & CHEMISTRY & MATH & COMPUTER SCIENCE=");
  scanf("%d%d%d%d",&phy,&chem,&math,&cs);
  t=phy+chem+math+cs;
  avg=t/4;
  printf("total=%d \naverage=%d\n",t,avg);
  if(avg>=90 && avg<=100)
    grd='O';
  else if(avg>=80 && avg<=89)
    grd='A';
  else if(avg>=70 && avg<=79)
    grd='B';
  else if(avg>=60 && avg<=69)
    grd='C';
  else if(avg>=50 && avg<=59)
    grd='D';
  else if(avg>=40 && avg<=49)
    grd='F';
  printf("\nGrade = %c",grd);
}