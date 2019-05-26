#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char str[4];
   int x=0;
   int a=1, b=1;
   if ( fgets(str, 4, stdin)!=NULL ) {
      x = atoi(str);
   }
   if( x == 1 )
   {
      printf( "-1" );
      return(0);
   }
   printf( "%i %i", x, x );
   return(0);
}