#include <stdio.h>
void main()
{
   int i,n,max,min;
   printf("Enter length\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter element\n");
   scanf("%d",&a[0]);
   max=a[0];
   min=a[0];
   for(i=1;i<n;i++)
   {
      printf("Enter element\n");
      scanf("%d",&a[i]);
      if(max<=a[i])
        max=a[i];
      if(min>=a[i])
        min=a[i];
   }
   printf("Range= %d\n",(max-min));
   }