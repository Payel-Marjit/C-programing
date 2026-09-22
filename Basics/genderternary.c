//Gender calculation [BY TERNAEY]
#include<stdio.h>
void main()
{
 char x;
   printf("enter your grnder=");
   scanf("%C",&x);
   (x=='m' || x=='M')?printf("MALE"):(x=='f' || x=='F')?printf("FEMALE"):(x=='t' || x=='T')?printf("TRANSGENDER"):printf("N/A"); 
}
