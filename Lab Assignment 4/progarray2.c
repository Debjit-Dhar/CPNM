#include <stdio.h>
void main()
{
   int i,n,flag=1,c=0,j;
   printf("Enter the size of the array.\n");
   scanf("%d",n);
   int a[n];
   for(i=0;i<n;i++)
   {
      printf("Enter the %d th element\n",i);
      fflush(stdin);
      scanf("%d",&a[i]);
   }
   int b[n];
   for(i=0;i<n;i++)
     b[i]=0;
   for(i=0;i<n;i++)
   {
      flag=1;
      for(j=0;j<n;j++)
       if(a[i]==a[j])
        {c++;flag=0;}
      if(flag==1)
       b[i]=a[i];
       }
    printf("No. of duplicate elements= %d\n",c);
    for(i=n-1;i>=0;i--)
      if(b[i]==0&&a[i]!=0)
        printf("");
        else
       printf("%d\t",b[i]);
    printf("\n");
     printf("End\n");
}