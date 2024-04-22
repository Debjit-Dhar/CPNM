#include <stdio.h>
void main()
{
  int n,i;
  printf("Enter a number.\n");
  scanf("%d",&n);
  printf("1+2+3+....+%d",n);
  printf("\n");
  int s=0;
  for(i=1;i<=n;i++)
    s+=i;
  printf("%d\n",s);
  printf("1.2+2.3+3.4+....+%d",n);
  printf(".%d",n+1);
  printf("\n");
  s=0;
  for(i=1;i<=n;i++)
    s+=i*(i+1);
  printf("%d\n",s);
  printf("1!+2!+3!+....+%d",n);
  printf("!\n");
  int fact =1;
  s=0;
  for(i=1;i<=n;i++)
  {
    fact*=i;
    s+=fact;
    }
  printf("%d\n",s);
  printf("1@+2@+3@+....+%d",n);
  printf("@\n");
  s=0;
  for(i=1;i<=n;i++)
    s+=sfact(i);
  printf("%d\n",s);
}
int sfact(int n)
{
   int s=0;
   for(int i=1;i<=n;i++)
     if(n%i==0)
       s+=i;
   return s;
}   