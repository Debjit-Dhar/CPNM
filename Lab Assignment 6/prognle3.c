#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double f(double);
double fdiff(double);
double diff(double);
void main()
{
    for(int i=1;i<=3;i++){
    double a,c,fa=1,fc=1;
        printf("Using Newton-Raphson Method.\n");
        printf("Enter assumed root.\n");
        scanf("%lf",&a);
        fa=f(a);
        if(fa==0)
        {printf("Root =%.2lf\n",a);break;}
        for(;;)
        {
            c=diff(a);
            a=c;
            fc=f(c);
            if(fabs(fc)<0.000001)
            {printf("Root =%lf\n",c);break;}
        }
        printf("Disjoint Interval= (%lf,%lf)\n",(c-0.5),(c+0.5));
     }
}
double f(double x)
{
    return pow(x,3)-2.5*pow(x,2)-2.46*x+3.96;
}
double fdiff(double x)
{
    return 3*pow(x,2)-5*x-2.46;  
}
double diff(double a)
{
    return a-f(a)/fdiff(a);
}
