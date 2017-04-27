#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float P1x, P1y, P2x, P2y, distancia;
    printf ("Digite a coordenada de x no ponto 1: ");
    scanf ("%f", &P1x);
    printf ("Digite a coordenada de y no ponto 1: ");
    scanf ("%f", &P1y);
    printf ("Digite a coordenada de x no ponto 2: ");
    scanf ("%f", &P2x);
    printf ("Digite a coordenada de y no ponto 2: ");
    scanf ("%f", &P2y);
    distancia= sqrt (pow(P2x-P1x,2) + pow(P2y-P1y,2));
    printf ("A distancia e': %g\n", distancia);
    return EXIT_SUCCESS;

}
