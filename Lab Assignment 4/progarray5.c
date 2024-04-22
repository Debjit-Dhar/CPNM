#include <stdio.h>
void main()
{
   int n=10;
   int i,j,a[n];
   for(i=0;i<n;i++)
   {
     printf("Enter element\n");
     scanf("%d",&a[i]);
   }
   for(i=n-1;i>=0;i--)
   {
     for(j=0;j<i;j++)
     {
       if(a[i]<=a[j])
       {
         int temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
     }
   }
   for(i=0;i<n;i++)
    printf("%d\t",a[i]);
   printf("\n");
   
   
   }