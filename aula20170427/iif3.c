#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i;
    unsigned long long int f;
    printf ("Digite um numero inteiro: ");
    scanf ("%i", &n);
    f=1;
    for (i=1; i<=n; i++)
        f=f*i;
    printf ("O fatorial e': %llu\n", f);


    return EXIT_SUCCESS;
}
