#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float sf=0;
    double sd=0;
    int n, i;
    printf ("Entre com um numero inteiro: ");
    scanf ("%d", &n);
    for (i=1; i<730; i++) {
        sf= sf+1.0/n;
        sd= sd+1.0/n;}
    printf ("Resultado da soma: %.15lf\n", sd);
    printf ("Resultado da soma: %.15f\n", sf);

    return EXIT_SUCCESS;
}
