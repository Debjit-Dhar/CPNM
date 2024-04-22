#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE*fp;
   if(!(fp=fopen("Records","w+")))
   {
      printf("File cannot be opened\n");
      exit(1);
   }
   struct student{
    long int roll;
    char name[100];
    char dept[50];
    char course[40];
    int year;
    double marks[6];
   };   
   int n;
   printf("Enter number of students\n");
   scanf("%d",&n);
   struct student starr[n];
   for(int i=0;i<n;i++)
   {
      printf("Enter roll\n");
      scanf("%ld",&starr[i].roll);
      printf("Enter name\n");
      fflush(stdin);
      scanf("%[^\n]s",starr[i].name);
      printf("Enter department\n");
      fflush(stdin);
      scanf("%[^\n]s",starr[i].dept);
      printf("Enter course\n");
      fflush(stdin);
      scanf("%[^\n]s",starr[i].course);
      printf("Enter year\n");
      scanf("%d",&starr[i].year);
      for(int j=0;j<6;j++)
      {
         printf("Enter marks\n");
         scanf("%lf",&starr[i].marks[j]);
      }
   }
   int y;
   printf("Enter year filter\n");
   scanf("%d",&y);
   for(int i=0;i<n;i++)
    if(starr[i].year==y)
     printf("%s\n",starr[i].name);
   long int r;
   printf("Enter roll filter\n");
   scanf("%ld",&r);
   for(int i=0;i<n;i++)
   {
     if(starr[i].roll==r)
     {
        printf("%ld\n",starr[i].roll);
        printf("%s\n",starr[i].name);
        printf("%s\n",starr[i].dept);
        printf("%s\n",starr[i].course);
        printf("%d\n",starr[i].year);
        for(int j=0;j<6;j++)
         printf("%lf\n",starr[i].marks[j]);
        fscanf(fp,"%ld",&starr[i].roll);
        fscanf(fp,"%[^\n]s",starr[i].name);
        fscanf(fp,"%[^\n]s",starr[i].dept);
        fscanf(fp,"%[^\n]s",starr[i].course);
        fscanf(fp,"%d",&starr[i].year);
        for(int j=0;j<6;j++)
         fscanf(fp,"%lf",&starr[i].marks[j]);
        break;
     }
   }
   double avg[n];
   long int rolls[n];
   for(int i=0;i<n;i++)
   {
      avg[i]=0;
      for(int j=0;j<6;j++)
       avg[i]+=starr[i].marks[j];
      avg[i]/=6;
      rolls[i]=starr[i].roll;
   }
   for(int i=n-1;i>=0;i--)
   {
      for(int j=0;j<i;j++)
      {
         if(avg[j]>=avg[j+1])
         {
            double temp=avg[j];
            avg[j]=avg[j+1];
            avg[j+1]=temp;
            long int r1=rolls[j];
            rolls[j]=rolls[j+1];
            rolls[j+1]=r1;
         }
      }
   }  
   for(int i=1;i<=n;i++)
   {
      for(int j=0;j<n;j++)
      {
          if(rolls[i]==starr[j].roll)
          {
            printf("%ld\n",starr[j].roll);
            printf("%s\n",starr[j].name);
            printf("%s\n",starr[j].dept);
            printf("%s\n",starr[j].course);
            printf("%d\n",starr[j].year);
            for(int k=0;j<6;j++)
              printf("%lf\n",starr[j].marks[k]);
          }
      }
   }
   fclose(fp);
   return 0;
}