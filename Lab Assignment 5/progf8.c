#include <stdio.h>
int main()
{
   int n,i,j,k;
   printf("Enter length of the string\n");
   scanf("%d",&n);
   printf("Enter string\n");
   char s1[n+2];
   fflush(stdin);
   scanf("%[^\n]s",s1);
   s1[n]=' ';
   char s2[n+2];
   int start=0,end=0;
   for(i=0;i<n+1;i++)
   {
     if(s1[i]==' ')
     {
        end=i-1;
        for(k=start,j=end;j>=start;k++,j--)
         s2[k]=s1[j];
        start=i+1;
        s2[end+1]=' ';
     }
   }
   for(i=0;i<n;i++)
    printf("%c",s2[i]);
   return 0;
}