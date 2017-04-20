#include <stdio.h>

int main()
{
    int n, i, f;
    printf ("Digite um numero inteiro: ");
    scanf ("%i", &n);
    f=1;
    for (i=1; i<=n; i++)
        f=f*i;
    printf ("O fatorial e': %i\n", f);


    return 0;
}
