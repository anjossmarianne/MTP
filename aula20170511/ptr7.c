#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NCHAR 256

int main(){
    int i, opt;
    long long int *p;
    char *pc;
    char string[NCHAR];
    printf ("Digite 1 para criptografar e 2 para descriptografar: ");
    scanf ("%d", &opt); getchar();
    if (opt==1){
            for (i=0; i<NCHAR; i++)
                string[i]='\0';
    printf ("Digite uma frase com no maximo 256 caracteres: \n");
    fgets (string, NCHAR, stdin);
    printf ("Criptografando...\n");
    for (i=0; i<sizeof(string)/sizeof(long long int); i++)
        if (p[i]!=0)
        printf ("%lld ", p[i]);
    return EXIT_SUCCESS;
    }
    if (opt==2){

            do{

            } while();
            return EXIT_SUCCESS;
    }
}




