#include "My_String.h"

int main () {
char dest[20];
   char src[20];
   int len;

   strcpy(src, "Tutorials Point");
   len = My_strxfrm(dest, src, 20);

   printf("Length of string |%s| is: |%d|", dest, len);

   return(0);
}

