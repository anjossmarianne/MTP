#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
    int vet[N], i, som=0, prod;
    printf ("Entre com 10 numeros para o vetor: ");
    for (i=0; i<N; i++) {
        scanf ("%d", &vet[i]);
        som= som+vet[i];}
    prod=vet[0];
    for (i=1; i<N; i++)
        prod= prod*vet[i];
    printf ("A soma dos numeros e': %d\n", som);
    printf ("O produto dos numeros e': %d\n", prod);
    return 0;
}
