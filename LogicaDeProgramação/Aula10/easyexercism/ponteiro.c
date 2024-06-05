#include <stdio.h>
#include <stdlib.h>



int dobrar(int *numero)
{
    int dobro = *numero * 2;
    *numero = dobro;
    return 0;
}

int main()
{
    int a = 10;
    dobrar(&a);
    printf("%i", a);
}

