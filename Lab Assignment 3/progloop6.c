#include <stdio.h>
void main()
{
   int n;
   printf("Enter a number\n");
   scanf("%d", &n);
   int a=1,b=1,c=0;
   printf("%d", c);
   printf(",%d", a);
   printf(",%d", b);
   for(int i=1;i<=n-2;i++)
   {
      c=a+b;
      printf(",%d",c);
      a=b;
      b=c;
      }
   }