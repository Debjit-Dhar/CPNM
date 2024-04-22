#include <stdio.h>
void main()
{
    int m,n;
    printf("Enter no.of rows.\n");
    scanf("%d",&m);
    printf("Enter no of columns.\n");
    scanf("%d",&n);
    int a[m][n];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter no.\n");
            scanf("%d",&a[i][j]);
        }
    }
    int b[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        b[i][j]=a[j][i];
    }
    printf("ORIGINAL MATRIX\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("TRANSPOSED MATRIX\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }

}
