#include <stdio.h>

int main()
{
    float a, b, c, d, e, x, y, z, w, t, m;
    printf ("Digite as 5 notas do aluno, com valores de 0 a 10: ");
    scanf ("%f %f %f %f %f", &a, &b, &c, &d, &e);
    m = (2*a+2*b+2*c+3*d+5*e)/14;
    printf ("A media do aluno e': %g", m);

    return 0;
}
