#include <stdio.h>

 int main(void)
 {
   char str[1000];
   int ch, i, n = 0;
  
   while ((ch = getchar()) != EOF && n < 1000)
     str[n++] = ch;
	   
   for (i = 0; i < n; ++i)
     putchar(str[i]);

   putchar('\n'); /* trailing '\n' needed in Standard C */
	
   return 0;
 }
