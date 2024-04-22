#include <stdio.h>
void main()
{
  int n;
  printf("Enter a number\n");
  scanf("%d", &n);
  int s=0,c=1;
  for(int i=1;i<=n/2;i+=2)
  {
     s+=i;
     if(s==n)
      { printf("Square Root%d\n",c);return;}
     c++;
  }
  printf("No integral square root\n");
}