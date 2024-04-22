#include <stdio.h>
void main()
{
  int n;
  printf("Enter a number.\n");
  scanf("%d", &n);
  printf("Numbers between 1 and 100 that are divisible by %d",n);
  printf("\n");
  for(int i=2;i<100;i++)
    if(i%n==0)
     printf("%d\n", i);
  printf("all prime numbers between 1 and %d",n);
  printf("\n");
  for(int i=2;i<n;i++)
    if(isPrime(i)==1)
      printf("%d\n", i);
  printf("All prime factors of %d",n);
  printf("\n");
  for(int i=2;i<=n;i++)
    if(n%i==0 && isPrime(n)==1)
      printf("%d\n",i);
  printf("Octal equivalent of %d",n);
  int copy=n,s=0,sd=0,pow=1,r=0;
  while(copy>0)
  {
     int d=copy%8;
     s=d*pow+s;
     pow*=10;
     copy/=8;
      }
   copy=n;
  while(copy>0)
  {
     sd+=copy%10;
     r=r*10+copy%10;
     copy/=10;
  }
  printf("%d\n",s);
  printf("Sum of digits of %d",n);
  printf("\n");
  printf("%d\n",sd);
  printf("Factorial of %d",n);
  printf("\n");
  int fact=1;
  for(int i=1;i<=n;i++)
    fact*=i;
  printf("%d\n",fact);
  printf("Reverse of %d",n);
  printf("\n");
  printf("%d\n",r);
  }
int isPrime(int n)
{
  for(int i=2;i<=n/2;i++)
    if(n%i==0)
      return 0;
  return 1;
}
