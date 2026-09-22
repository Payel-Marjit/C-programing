/*
   A B C B
   E F G H
   I J K L
   M N O P
*/
#include<stdio.h>
int main()
{

    char x='A';
    int i,j;
    for(i=1;i<=4;i++)
    {
      for(j=1;j<=4;j++)
      {
         printf("%c ",x);
         x++;
      }
      printf("\n");
    }
   return 0;
}

