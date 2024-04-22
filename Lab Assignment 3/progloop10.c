# include <stdio.h>
void main()
{
  int n;
  printf("Enter a number\n");
  scanf("%d", &n);
  printf("Pattern First\n");
  int i,j;
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=i;j++)
       printf("%d", j);
     printf("\n");
   }
  printf("Pattern Second\n");
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n-i;j++)
       printf(" ");
     for(j=1;j<=i;j++)
       printf("%d",j);
     printf("\n");
   }
  printf("Pattern Third\n");
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n-i;j++)
       printf(" ");
     for(j=1;j<=i;j++)
       printf("%d",j);
     for(j=1;j<i;j++)
       printf("%d",j);
     for(j=1;j<=n-i;j++)
       printf(" ");
     printf("\n");
  }
  printf("Pattern Fourth\n");
  int k=1;
  for(i=1;i<=2*n-1;i++)
  {
    for(j=n*2-2;j>=i;j--)
      printf(" ");
    for(j=1;j<=k;j++)
      printf("%d ",j);
    if(i%2==0)
     printf("%d ",j-1);
    for(j=k-1;j>0;j--)
     printf("%d ",j);
    if(i%2==0)
      k++;
    printf("\n");
  }
  printf("Pattern Fifth\n");
  k=0;
  for(i=n;i>=1;i--)
  {
     for(j=i;j>=k;j--)
       printf("%d", j);
     printf("\n");
     k++;
  }
  printf("Pattern Sixth\n");
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n-i;j++)
       printf(" ");
     for(j=1;j<=i;j++)
       printf("+");
     for(j=1;j<i;j++)
       printf("+");
     for(j=1;j<=n-i;j++)
       printf(" ");
     printf("\n");
  }
  k=1;
  for(i=n+1;i>=1;i-=2)
  {
     for(j=1;j<=k;j++)
       printf(" ");
     k++;
    for(j=1;j<=i;j++)
      printf("+");
    printf("\n");
  }
  printf("Pattern Seven\n");
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n-i;j++)
       printf(" ");
     for(j=1;j<=i;j++)
       printf("%d",j);
     for(j=1;j<i;j++)
       printf("%d",j);
     for(j=1;j<=n-i;j++)
       printf(" ");
     printf("\n");
  }
  for(i=1;i<=n-1;i++)
  {
     for(j=1;j<=i;j++)
       printf(" ");
     for(j=1;j<=n-i;j++)
       printf("%d",j);
     for(j=n-i-1;j>=1;j--)
       printf("%d",j);
     printf("\n");
   }
printf("Pattern Eight\n");
for(i=1;i<=n*2+1;i++)
  printf("+");
printf("\n");
for(i=1;i<=n;i++)
{
  for(j=n;j>=i;j--)
    printf("+");
  for(j=1;j<=2*i-1;j++)
    printf(" ");
  for(j=n;j>=i;j--)
    printf("+");
  printf("\n");

}
k=2*n-3;
for(i=2;i<=n;i++)
{
  for(j=1;j<=i;j++)
    printf("+");
  for(j=1;j<=k;j++)
    printf(" ");
  k-=2;
  for(j=1;j<=i;j++)
    printf("+");
  printf("\n");
}
for(i=1;i<=n*2+1;i++)
  printf("+");
printf("\n");
printf("Pattern Nine\n");
for(i=1;i<=n;i++)
  {for(j=n-1;j>=i;j--)
    printf(" ");
    printf("+");
   for(j=1;j<i;j++)
     printf(" ");
    for(j=1;j<i-1;j++)
     printf(" ");
   if(i!=1)
     printf("+");
   printf("\n");}
k=2*n-5;
for(i=1;i<n;i++)
{
    for(j=1;j<=i;j++)
      printf(" ");
    printf("+");
    for(j=k;j>=1;j--)
      printf(" ");
    if(i!=n-1)
     printf("+");
    k-=2;
    printf("\n");
}
}