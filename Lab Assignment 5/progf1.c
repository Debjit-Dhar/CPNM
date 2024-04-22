#include <stdio.h>
void main()
{
   int n;
   printf("Enter a number.\n");
   scanf("%d",&n);
   printf("Binary equivalent= %d\n",fbin(n,1));
   printf("Sum of digits= %d\n",sod(n));
}
int sod(int n)
{
   if(n==0)
    return 0;
    else
     return n%10+sod(n/10);
}
int fbin(int n,int pow)
{
  if(n==0)
    return 0;
    else
      return fbin(n/2,pow*10)*10+(n%2);
}