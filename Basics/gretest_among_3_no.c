//WAP to check greatest among 3 No.
#include<stdio.h>
void main()
{
   int a,b,c;
   printf("Enter 3 No. = ");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b && b==c)
     printf("1st No. %d is Greatest and 2nd ,3rd are Equal",a);
   else if(a<b && b==c)
     printf("1st No. %d is Lowest and 2nd ,3rd are Equal",a); 
   else if(b>a && a==c)
     printf("2nd No. %d is gretest and 2nd ,3rd are Equal",b);
   else if(b<a && a==c)
     printf("2nd No. %d is lowest and 2nd ,3rd are Equal",b);
   else if(c>a && a==b)
     printf("3rd No. %d is gretest and 2nd ,1st are Equal",c);
   else if(c<a && a==b)
     printf("3rd No. %d is lowest and 2nd ,1st are Equal",c);
   else if(a>b && a>c)
      printf("1st No. %d is Greatest",a);
   else if(b>c)
      printf("2nd No. %d is Greatest",b);
   else if(a==b && b==c)
      printf("All are Equal");
   else
      printf("3rd No. %d is Greatest",c);
}