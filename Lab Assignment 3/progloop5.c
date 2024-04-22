#include <stdio.h>
#include <math.h>
void main()
{
    double n;
    char u;
    printf("Enter the angle.\n");
    scanf("%lf", &n);
    printf("Enter the unit\n");
    scanf("%s", &u);
    if(u=='d'||u=='D')
      n=(3.14)*n/180;
      else if(u=='g'||u=='G')
        n=(3.14)*n/200;
        else  
          {printf("Invalid Input\n"); return;}
    printf("Enter precision number of terms\n");
    int num;
    scanf("%d", &num);
    int c=1,sign=1;
    double s=0;
    for(int i=1;c<=num;i+=2,c++)
    {
          s+=sign*(pow(n,i*1.0)/fact(i));
          sign*=-1;
    }
    printf("Sine of the given angle is %lf\n",s);
}
    
    int fact(int n)
    {
        int fact=1;
        while(n>0)
        {
            fact*=n;
            n--;
        }
        return fact;
    }