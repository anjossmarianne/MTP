#include <stdio.h>

int main()
{
    int n, p, i;
    printf ("Digite um numero: ");
    scanf ("%i", &n);
    p=1;
    for (i=2; i<n; i++)
    {
        if (n%i==0)
            p=0;
    }
    if (p==1)
        printf ("O numero e' primo.\n");
    else
        printf ("O numero nao e' primo.\n");

    return 0;
}
