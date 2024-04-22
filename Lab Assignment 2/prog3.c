# include <stdio.h>
# include <math.h>
//PROGRAM 3
void main()
{
   int a,b,min,max;
   printf("Enter two numbers.\n");
   scanf("%d %d", &a, &b);
   if(a>b)
    {max=a;min=b;}
    else
     {max=b;min=a;}
   printf("%d",max-5);
   printf("/ %d\n", min);
   float c=(max*1.0)/min;
   printf("%f",c);
}