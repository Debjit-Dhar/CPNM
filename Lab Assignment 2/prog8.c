# include <stdio.h>
# include <math.h>
//PROGRAM 8
void main()
{
   float x,y,r;
   printf("Enter two numbers\n");
   scanf("%f %f", &x, &y);
   printf("Enter radius\n");
   scanf("%f", &r);
  
   if(sqrt(x*x+y*y)<r)
     printf("Inside.");
     else if(sqrt(x*x+y*y)==r)
       printf("On.");
       else
         printf("Outside.");
}