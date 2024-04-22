#include <stdio.h>
//PROGRAM 10
void main()
{
   int s,sec;
   printf("Enter time in seconds.");
   scanf("%d", &s);
   sec=s;
   int h,m;
   if(s>3600)
   {
     while(s>60)
       s/=60;
     h=s;
     s=sec-(h*3600);
     sec=s;
     }
     else
      h=0;
   if(s>60)
   {
     while(s>60)
       s/=60;
     m=s;
     s=sec-(m*60);
     }
     else
      m=0;
   
   printf("Hours %d", h);
   printf("Minutes %d", m);
   printf("Seconds %d", s);
}