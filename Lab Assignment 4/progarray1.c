#include <stdio.h>
void main()
{
    int i,n;
    printf("Enter the size of the array.\n");
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter an integer.\n");
        scanf("%d",&a[i]);
        }
    for(i=n-1;i>=0;i--)
      printf("%d\t",a[i]);
    printf("\n");
    
 }