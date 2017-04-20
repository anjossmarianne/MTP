#include <stdio.h>
#include <string.h>

int main()
{
    int i=0;
    char p[256];
    printf ("Digite a palavra: ");
    scanf ("%s", p);
    while(p[i]!='\0')
    {
        i++;
    }
    printf ("A palavra tem %d caracteres.\n", i);
    return 0;
}
