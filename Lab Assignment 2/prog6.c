# include <stdio.h>
# include <math.h>
//PROGRAM 6
void main()
{
   int choice,a,b,c;
   printf("Enter ur choice 1 or 2\n");
   scanf("%d", &choice);
   switch(choice)
   {
     case 1:
        printf("Enter 3 angles of a triangle.\n");
        scanf("%d %d %d", &a, &b, &c);
        if(a+b>c && a+c>b && b+c>a)
          printf("Valid Triangle.");
          else
           printf("Invalid Triangle");
        break;
    case 2:
        printf("Enter 3 sides of a triangle.\n");
        scanf("%d %d %d", &a, &b, &c);
        if(a+b>c && a+c>b && b+c>a)
          printf("Valid Triangle.");
          else
           printf("Invalid Triangle");
       break;
    }
}