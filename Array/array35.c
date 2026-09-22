//WAP to compare 2 string
#include<stdio.h>
void main()
{
    char x[20],y[20];
    int i,f=0;
    printf("Enter the 1st String = ");
    gets(x);
    printf("Enter the 2nd String = ");
    gets(y);
    for(i=0;x[i]!='\0' || y[i]!='\0';i++)
    {
        if(x[i]>=97 && x[i]<=122)
          x[i]=x[i]-32;
        if(y[i]>=97 && y[i]<=122)
          y[i]=y[i]-32;
    }
   // printf("1st String = %s\n2nd String = %s",x,y);
   for(i=0;x[i]!='\0' || y[i]!='\0';i++)
   {
      if(x[i]!=y[i])
        {
            f=1;
            break;
        }
   }
   if(f==0)
     printf("String Matched");
   else
     printf("String NOT Matched");
}