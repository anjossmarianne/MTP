#include <stdio.h>

int main()
{
    int n, i;
    int a=0;
    int c=0;
    printf ("Digite um numero: ");
    scanf ("%i", &n);
    int d[n];
    for (i=1; i<n; i++)
        {
            if (n%i==0)
            {
                d[c]=i;
                c++;
            }
        }
    for (i=0; i<c; i++)
    {
        a=a+d[i];
    }

    if (a=n)
        printf ("O numero e' perfeito.");
    else
        printf ("O numero nao e' perfeito.");

    return 0;
}
