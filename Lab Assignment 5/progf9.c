#include <stdio.h>
#include <string.h>
int main()
{
   int n;
   printf("Enter length of the string\n");
   scanf("%d",&n);
   printf("Enter string\n");
   char s[n+1];
   fflush(stdin);
   scanf("%[^\n]s",s);
   fflush(stdin);
   printf("Enter character to be squeezed out\n");
   char c;
   scanf("%c",&c);
   squeeze(s,c,n);
   return 0;
}
void squeeze(char s[],char c,int n)
{
   for(int i=0;i<n;i++)
   if(s[i]!=c)
    printf("%c",s[i]);
   printf("\n");
}
