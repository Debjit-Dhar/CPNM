#include <stdio.h>
void main()
{
    int n=6;
   int i,j,a[10][6],temp;
   for(i=0;i<10;i++)
   {
     for(j=0;j<5;j++)
      {printf("Enter \n");
      scanf("%d",a[i][j]);}
    }
   printf("Roll No\tMath\tComp Sc\tPhysics\tChemistry");
   for(i=n-1;i>=0;i--)
   {
     for(j=0;j<i;j++)
     {
       if(a[i][0]<=a[j][0])
       {
         temp=a[i][0];
         a[i][0]=a[j][0];
         a[j][0]=temp;
         temp=a[i][0];
         a[i][0]=a[j][0];
         a[j][0]=temp;
         temp=a[i][0];
         a[i][0]=a[j][0];
         a[j][0]=temp;
         temp=a[i][0];
         a[i][0]=a[j][0];
         a[j][0]=temp;
       }
     }
   }
   
}