#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, c=0;
    unsigned char *p;
    int vetor[] = {0,1,2,4,8};
    p=(unsigned char *) vetor;
    for (i=0; i<sizeof(vetor); i++)
        if (p[i]==0)
            c++;

    printf ("%d bytes sao iguais a 0.\n", c);
    return EXIT_SUCCESS;
}
