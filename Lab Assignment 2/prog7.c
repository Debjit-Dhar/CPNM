# include <stdio.h>
# include <math.h>
//PROGRAM 7
void main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter first point");
    scanf("%d %d", &x1, &y1);
    printf("Enter second point");
    scanf("%d %d", &x2, &y2);
    printf("Enter third point");
    scanf("%d %d", &x3, &y3);
    float a=((y2-y1)*1.0)/(x2-x1);
    float b=((y3-y1)*1.0)/(x3-x1);
    if(a==b)
      printf("Straight Line.");
      else
        printf("Not Straight Line.");
}
