#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    unsigned int x=0xFACA8421;
    unsigned char *p;
    printf("Endereco: %p|Conteudo: %u\n", &x, x);
    p=(unsigned char *) &x;
    for (i=0; i<sizeof(x); i++)
        printf ("Em %p|Contem: %u ou %X ou %c\n", p+i, p[i], p[i], p[i]);

    return EXIT_SUCCESS;
}
