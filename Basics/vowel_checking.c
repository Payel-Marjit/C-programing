//Vowel consonant checking
#include<stdio.h>
void main()
{
    char x;
    printf("Enter the Character = ");
    scanf("%c",&x);
    if(x=='a' || x=='A' || x=='e' || x=='E' ||x=='i' || x=='I' ||x=='o' || x=='O' ||x=='u' || x=='U')
      printf("Vowel");
    else if((x>=65 && x<=90) ||(x>=97 && x<=122)) 
      printf("consonant");
    else
      printf("not applicable");    
}