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
   printf("%c",s[0]);
   for(int i=0;i<n;i++)
     if(s[i]==' ')
      printf("%c",s[i+1]);
   printf("\n");
   return 0;
}