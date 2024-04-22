#include <stdio.h>
void main()
{
    int c=1;
    for(int i=1;c<=10;i++)
      {if(isHappy(i)==1)
        {printf("%d\n",i);c++;}}
}
int isHappy(int n)
{
   while(n/10>0){
   int s=0;
   while(n>0)
   {
     s+=(n%10)*(n%10);
     n/=10;
   }
   n=s;}
   if(n==1)
     return 1;
   return 0;
}