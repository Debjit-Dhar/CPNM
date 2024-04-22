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
   int c=0;
   for(int i=0;i<n;i++)
    if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='A'||s[i+1]=='E'||s[i+1]=='I'||s[i+1]=='O'||s[i+1]=='U'))
      c++;
    printf("Number of occurences of consecutive vowels= %d\n",c);
   return 0;
}