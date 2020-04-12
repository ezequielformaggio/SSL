#include <stdio.h>

int main(void) {

   freopen("output.txt", "w", stdout);

   printf("Hello, World!");

   fclose(stdout);

   return 0;
}