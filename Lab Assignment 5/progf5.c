#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void main()
{
    char s1[80];
    printf("Enter String\n");
    gets(s1);
    int a;
    if(isdigit(*s1))
     a=atoi(s1);
    char s2[80];
    sprintf(s2,"%d",a);
    printf("In Integer= %d\n",a);
    printf("In String= %s\n",s2);
}