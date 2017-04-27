#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    srand (time(0));
    int i, c=0;
    float n, prob;
    printf ("Entre com uma probabilidade: ");
    scanf ("%f", &prob);
    for (i=0; i<100; i++) {
            n= rand()/(float)RAND_MAX;
            if (n<prob)
                c++;
    }
    printf ("Sao %d vezes.", c);
    return EXIT_SUCCESS;
}
