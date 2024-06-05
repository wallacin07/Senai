#include <stdio.h>

int trocar(int *var1, int *var2)
{

    int ptr_auxiliar = *var1;
    *var1 = *var2;
    *var2 = ptr_auxiliar;

}

int main()
{
    int variavel1 = 25;
    int variavel2 = 20;
    trocar(&variavel1,&variavel2);
    printf("Nova variavel 1 %d\n", variavel1);
    printf("Nova variavel 2 %d", variavel2);
}