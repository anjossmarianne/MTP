#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char c;
    char * texto = NULL;
    printf("Digite seu texto; '\\'+ENTER para encerrar: \n");
    FILE *arquivo=NULL;
    arquivo=fopen("meutexto.txt", "r");
    do {
        c = fgetc(arquivo);
        printf("%c", c);
    } while(c != EOF);
    fclose(arquivo);
    return 0;
}

