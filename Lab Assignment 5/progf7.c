#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter number of elements.\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element.\n");
        scanf("%d",&a[i]);
    }
    int s=0;
    for(i=0;i<n;i++)
    {
        int *p=&a[i];
        printf("%d\t",*p);
        s+=*p;
    }
    printf("\nSum is= %d\n",s);
}