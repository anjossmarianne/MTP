#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int num,a;
    printf ("Digite um numero inteiro aleatorio: ");
    scanf("%i", &num);
    a=rand()%10;
    num=num+a;
    if (num%2==0)
        printf ("O numero %d e' par.\n", num);
    else
        printf ("O numero %d nao e' par.\n", num);
    return 0;

}
