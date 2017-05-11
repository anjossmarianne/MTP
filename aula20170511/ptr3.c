#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, c=0;
    unsigned char *p;
    int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    p=(unsigned char *) vetor;
    for (i=0; i<sizeof(vetor); i++)
        if (p[i]==0xFF)
            c++;

    printf ("%d bytes sao iguais a 1.\n", c);
    return EXIT_SUCCESS;
}
