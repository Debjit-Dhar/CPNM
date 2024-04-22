# include <stdio.h>
# include <math.h>
//PROGRAM 1
void main()
{
   int a,b;
   printf("Enter two values\n");
   scanf("%d %d", &a, &b);
   int c=a;
   a=b;
   b=c;
   printf("%d %d",a,b);
}
