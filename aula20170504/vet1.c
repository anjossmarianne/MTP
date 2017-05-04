#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int main(){
    srand(time(0));
    int i, max, n[N];
    float med=0.0;
    printf ("Entre com o valor natural maximo: ");
    scanf ("%d", &max);
    for (i=0; i<N; i++)
        n[i]= rand()%max+1;
    for (i=0; i<N; i++)
    med=med+n[i];
    med=med/N;
    printf ("Media obtida: %g.n", med);
    return 0;
}
