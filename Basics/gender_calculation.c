//Gender calculation
#include<stdio.h>
void main()
{
 char x;
   printf("enter your grnder=");
   scanf("%C",&x);
   if(x=='m' || x=='M')
       printf("MALE");
    else if(x=='f' || x=='F') 
       printf("FEMALE"); 
    else if(x=='t' || x=='T')
       printf("TRANSGENDER");     
    else  
       printf("N/A"); 
}
