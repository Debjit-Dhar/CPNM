# include <stdio.h>
# include <math.h>
//PROGRAM 5
void main()
{
   int y;
   printf("Enter a year as input");
   scanf("%d", &y);
   if(y%400==0)
    printf("Leap");
    else if(y%4==0 && y%100!=0)
     printf("Leap");
     else
      printf("Not Leap");
 
}