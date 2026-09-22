//count how many times a letter present within a string
#include<stdio.h>
void main()
{
    char x[50],p;
    int i,c=0;
    printf("Enter the String = ");
    gets(x);
    printf("Enter the word you want to searched for = ");
    scanf("%s",&p);
    for(i=0;x[i]!=' ';i++)
      {
         if(x[i]==p)
          c++;
      }
     printf("%s present %d times ",p,c);
}