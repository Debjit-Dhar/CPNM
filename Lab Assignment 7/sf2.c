#include <stdio.h>

int main() {
   FILE *fp;
   char c;
   int total = 0, comments = 0;

   fp = fopen("sf2.c", "r");

   while ((c = getc(fp)) != EOF) {
      total++;
      if (c == '/') {
         char d = getc(fp);
         if (d == '*') {
            comments++;
            while ((c = getc(fp)) != EOF) {
               if (c == '*' && getc(fp) == '/') {
                  break;
               }
               comments++;
            }
         }
      }
   }

   fclose(fp);

   printf("Total characters: %d\n", total);
   printf("Comment characters: %d\n", comments);
   printf("Percentage of comment characters: %.2f%%\n", (float)comments/total*100);

   return 0;
}
