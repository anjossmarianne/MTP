#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double l1, l2, ang, a;
    printf ("Digite o valor de 2 lados do triangulo, e o angulo em radianos que eles formam: ");
    scanf ("%lf" , &l1);
    scanf ("%lf" , &l2);
    scanf ("%lf" , &ang);
    a= sqrt (pow(l1,2) + pow(l2,2) - 2*l1*l2*cos(ang));
    printf ("O outro lado e': %.2lf\n", a);
    return EXIT_SUCCESS;

}

