#include <stdio.h>
void main()
{
  int i,j,n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  int a[n][n];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
     {
        printf("Enter elements\n");
        scanf("%d",&a[i][j]);
     }
  }
  int temp;
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
       if(i<j){
       temp=a[i][j];
       a[i][j]=a[j][i];
       a[j][i]=temp;}
     }
  }
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
       printf("%d\t",a[i][j]);
     printf("\n");
   }
}