/*
Abundant no. 
sum of factor>no.
16=1,2,4,8     S.O.F=1+2+4+8=15     15<16   NOT ABUNDANT
20=1,2,4,5,10   S.O.F=22      22>20    ABUNDANT
*/
#include<stdio.h>
void main(){
    int i,n,s=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    if(n<=0)
       printf("Wrong input");
    else
    {
     printf("Factor of %d = ",n);
     for(i=1;i<n;i++){
        if(n%i==0)
        {
          printf("%d ",i);
          s=s+i;
        }
    }
    printf("\nSum of Factor of %d = %d",n,s);
    if(s>n)
       printf("\nAbundant no.");
    else
       printf("\nNot abundant no.");
   }
}