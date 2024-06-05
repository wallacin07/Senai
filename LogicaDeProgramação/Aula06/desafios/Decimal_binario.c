#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int i = 0;
int decimal = 0;
int main()
{
    int binario = 0;
    printf("Digite o binario que voce quer converter: ");
    scanf("%i", &binario);
    char texto_binario[64];
    sprintf(texto_binario, "%d", binario);
    int tamanho = strlen(texto_binario);
    conversor(binario,tamanho);
}

int conversor(int binario, int tamanho)
{
    if (tamanho == 0)
    {
        return 0;
        /* code */
    }
    decimal = decimal + (binario *(2^i));
    i++;
    printf("%i", decimal);
    conversor(binario/10,tamanho-1);

}