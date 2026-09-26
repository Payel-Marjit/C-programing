//Vowel consonant checking
#include<stdio.h>
void main()
{
    char x;
    printf("Enter the Character = ");
    scanf("%c",&x);
    if(x=='a' || x=='A' || x=='e' || x=='E' ||x=='i' || x=='I' ||x=='o' || x=='O' ||x=='u' || x=='U')
      printf("Vowel");
    else if(x=='@' || x=='#' || x=='$' || x==' ')
      printf("Special Character");
    else if(x=='0' || x=='1' || x=='2')
      printf("No.");
    else
      printf("Consonant");    
}