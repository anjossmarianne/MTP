#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int num, a, b, c;
    a=rand()%5;
    b=rand()%5;
    c=rand()%5;
    num=num+a+b+c;
    printf (a);
    printf (b);
    printf (c);
    printf (num=num+a+b+c);
    if (num%7==0 || num&11==0 )
        printf ("Voce ganhou!\n",num+a+b+c);
    else
        printf ("Voce perdeu!\n",num+a+b+c);
    return 0;

}
