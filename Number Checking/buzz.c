//WAP to check a no. buzz or not
#include<stdio.h>
void main()
{
    int x;
    printf("enter a no.=");
    scanf("%d",&x);
    if (x%7==0 && x%10==7)
      printf("%d is a buzz number",x);
    else
      printf("%d is not a buzz number",x);
}                                                                                                                                                                              