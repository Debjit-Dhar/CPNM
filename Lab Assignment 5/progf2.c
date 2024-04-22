#include <stdio.h>
int main()
{
   int n;
   printf("Enter length of the string\n");
   scanf("%d",&n);
   printf("Enter string\n");
   char s[n+1];
   fflush(stdin);
   scanf("%[^\n]s",s);
   printf("Length =%d\n",n);
   for(int i=n-1;i>=0;i--)
     printf("%c",s[i]);
   printf("\n");
   return 0;
}