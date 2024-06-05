#include <stdio.h>
int resultado = 1;
int recursiva_potencia(int base, int potencia)
{
    if (potencia == 0)
    {
        printf("%i", resultado);
        return 0;
    }
    resultado = resultado * base;
    return recursiva_potencia(base,potencia-1);
}
int main()
{
    recursiva_potencia(2,8);
}
