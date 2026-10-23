#include <stdio.h>
int main() 
{
char ch;
printf("Enter a charecter");
scanf("%c",&ch);

if ((ch>='A') && (ch<='Z')) 
   printf("This Alphabet is Upper Case ");
else if((ch>='a') && (ch<='z')) 
         printf("This Alphabet is Lower Case");
else
    printf("This is not an Alphabet");  
 return 0;
      
}