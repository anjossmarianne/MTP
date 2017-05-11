#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

int main(){
    srand (time(NULL));
    int i, n, c=0;
    int vetor[N];
    unsigned char *p;
    for  (i=0; i<N; i++)
        vetor[i]=rand();
    p=(unsigned char *) vetor;
    printf ("Escolha um numero entre 0 e 255: ");
    scanf ("%d", &n);
    for (i=0; i<sizeof(vetor); i++)
        if (p[i]==n){
        c++;
        printf ("Em %p, temos %d\n", p+1, p[i]);
    }
    printf ("%d bytes com %d entre %p e %p\n", c, n, p+sizeof(vetor));
    return EXIT_SUCCESS;
}
