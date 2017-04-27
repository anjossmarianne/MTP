#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    double b, n, l;
    printf ("Digite um numero e a base para ser calculado o log: ");
    scanf ("%lf" , &n);
    scanf ("%lf" , &b);
    l=log(n)/log(b);
    printf ("O log e': %.2lf\n", l);
    return EXIT_SUCCESS;

}
