#include <stdio.h>
#include <stdlib.h>

int main( )
{
   float *c = (float*)malloc( sizeof( float ) );
   *c = 3.1;
   float cc = 3.1;
   int *h = (int*)malloc( sizeof( int ) );
   *h=2;
   printf( "(float*)soy lo apuntado:%f\n", *c );
   printf( "(float*)soy el apuntador:%f\n", c );
   printf( "(float*) con casting a int:%i\n", (int)*c );
   printf( "(float)formato f:%f\n", c );
   printf( "(float)formato i:%i\n", c );
   printf( "(float)formato s:%s\n", c );
   printf( "(int*)soy el entero apuntado:%i\n", *h );
   printf( "(int*)soy el entero apuntador:%i\n", h );
   free( (void*)c );
   free( (void*)h );
}
