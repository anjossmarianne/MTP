#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}

int main()
{
    float b, h, a;
    printf ("Digite a base e a altura do paralelogramo: ");
    scanf("%f", &b);
    scanf("%f", &h);
    safeFlush();
    a=b*h;
    printf ("A area do paralelogramo e': %g", a);

    return 0;
}
