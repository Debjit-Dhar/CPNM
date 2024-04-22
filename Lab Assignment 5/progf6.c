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
   int flag=1;
   for(int i=0;i<n;i++)
    if(s[i]!=s[n-i-1])
     flag=0;
   if(flag==0)
     printf("Not Palindrome\n");
   else 
     printf("Palindrome\n");
   printf("Number of characters= %d\n",n);
   int c=1;
    for(int i=0;i<n;i++)
     if(s[i]==' ')
      c++;
    printf("Number of words= %d\n",c);
 return 0;
}