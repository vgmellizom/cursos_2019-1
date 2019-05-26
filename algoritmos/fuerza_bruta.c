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
  
   for( int i = 0; i < x; i++)
   {
      for( int j = 0; j < x; j++)
      {
         if( (a%b == 0) && (a*b > x ) && (a/b < x) )
         {
            printf( "%i %i", a, b );
            goto encontrado;
         }
         b++;
      }
      b=1;
      a++;
   }
   printf( "-1" );
   encontrado:
   return(0);
}