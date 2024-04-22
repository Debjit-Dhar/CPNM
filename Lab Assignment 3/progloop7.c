#include <stdio.h>
void main()
{
    for(int i=1;i<=500;i++)
      if(isarmstrong(i)==1)
        printf("%d\n", i);
 }
 int isarmstrong(int n)
 {
    int s=0,copy=n;
    while(n>0)
    {
       s+=(n%10)*(n%10)*(n%10);
       n/=10;
       }
    if(s==copy)
      return 1;
      else
        return 0;
 }