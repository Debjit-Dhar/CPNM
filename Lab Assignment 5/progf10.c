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
   int N;
   printf("Enter length of string to be checked\n");
   scanf("%d",&N);
   char t[N];
   fflush(stdin);
   printf("Enter string\n");
   scanf("%[^\n]s",t);
   int a=strend(s,t,n,N);
   printf("%d\n",a);
}
int strend(char s[],char t[],int n,int N)
{
     int i,j=n-N-1;
    for(i=j+1;i<n;i++)
     if(s[i]!=t[i-j-1])
      return 0;
    return 1;
}