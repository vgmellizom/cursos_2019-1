#include <stdio.h>
#include <time.h>

int main( )
{
/*tiempo en segundos: 0.001000
instrucciones por segundo: 3020000000.000000*/
  int e, c, d, k, sum = 0;
  long first[100][100], second[100][100], multiply[100][100];

  for( c = 0; c < 100; c++ )
    for( d = 0; d < 100; d++ )
    {
      first[c][d] = c + d;
      second[c][d] = c + d;
    }
  clock_t t;
  t = clock();
  for( e = 0; e < 10; e++ )
    for (c = 0; c < 100; c++) {
      for (d = 0; d < 100; d++) {
        for (k = 0; k < 100; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
        multiply[c][d] = sum;
        sum = 0;
      }
    }

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;

    printf( "tiempo en segundos: %f \n", time_taken );
    printf( "instrucciones por segundo: %f",(((3*100)+3)*100*100*10)/ time_taken );
  return 0;
}
