#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
    int vet[N], i, aux[N];
    printf ("Entre com 10 numeros para o vetor: ");
    for (i=0; i<N; i++)
        scanf ("%d", &vet[i]);
    printf("\n\n");
    for (i=0; i<N; i++)
            aux[i]=vet[i];
    for (i=0; i<N; i++)
        aux[i]=vet[9-i];
    for (i=0; i<N; i++)
            printf ("Reverso do vetor: %d\n", aux[i]);
    return 0;
}
