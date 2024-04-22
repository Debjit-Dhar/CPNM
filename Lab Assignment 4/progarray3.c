#include <stdio.h>
void main()
{
   int a[3][3],b[3][3],c[3][3];
   int i,j;
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
       printf("Enter element\n");
       scanf("%d",&a[i][j]);
     }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
       printf("Enter element\n");
       scanf("%d",&b[i][j]);
     }
   printf("Sum\n");
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      c[i][j]=a[i][j]+b[i][j];
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
      printf("%d\t",c[i][j]);
     printf("\n");
    }
   int s1=0,s2=0,s3=0;
   printf("Difference\n");
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      c[i][j]=a[i][j]-b[i][j];
     for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
      printf("%d\t",c[i][j]);
     printf("\n");
    }
    printf("Product\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {s1+=a[i][j]*b[j][i];s2+=a[i][j]*b[j][i+1];s3+=b[i][j+2];}
      c[i][0]=s1;
      c[i][1]=s2;
      c[i][2]=s3;
      }
    for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
      printf("%d\t",c[i][j]);
     printf("\n");
    }
   
     
}