#include <stdio.h>
void main()
{
   int i;
   for(i=123;i<=321;i++)
    if(iscontain(i)==1)
     printf("%d\n",i);
}
int iscontain(int n)
{
  while(n>0)
  {
    if(n%10!=1 && n%10!=2 && n%10!=3)
      return 0;
    n/=10;
  }
  return 1;
}