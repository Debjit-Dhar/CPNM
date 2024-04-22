# include <stdio.h>
# include <math.h>
//PROGRAM 2
void main()
{
   int n;
   printf("Enter a 3 digit number.");
   scanf("%d", &n);
   int s=0;
   while(n>0)
   {
      s+=n%10;
      n/=10;
   }
   printf("Sum is %d",s);
}