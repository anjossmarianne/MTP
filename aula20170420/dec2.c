#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}

int main()
{
    srand (time(0));
    int n;
    float aleatorio;
    for (n=0; n<10; n++) {


    }


    printf ("%g\n", aleatorio);

    return 0;
}
