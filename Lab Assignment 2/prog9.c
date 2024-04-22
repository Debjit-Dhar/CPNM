# include <stdio.h>
# include <math.h>
//PROGRAM 9
void main()
{
   char ch;
   printf("Enter a character.");
   scanf("%c", &ch);
   if(ch>='A' && ch<='Z')
     printf("Capital Letter.");
   else if(ch>='a' && ch<='z')
     printf("Small Letter.");
   else if(ch>='0' && ch<='9')
     printf("Digit");
   else
      printf("Special symbol");
}