/*
   A B C D
   E F G
   H I
   J
*/
#include<stdio.h>
int main()
{
    char x='A';
    int i,j;
    for(i=1;i<=4;i++)
    {
      for(j=i;j<=4;j++)
      {
         printf("%c ",x);
         x++;
      }
      printf("\n");
    }
    return 0;
}