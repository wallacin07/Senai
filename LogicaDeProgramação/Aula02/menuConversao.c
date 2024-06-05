#include <stdio.h>

int main()
{
    int c = 0,escolha, resposta = 0,conversor = 1,a;
    // a
    printf("Voce quer fazer o que?\n1- Converter Celsius para Fahrenheit\n2- Fahrenheit para Celsius\n-- ");
    scanf("%i", &escolha);
    switch (conversor)
    {
    case 1:
        printf("Diga quantos graus quer converter: ");
        scanf("%i", &c);
        float f_convertido = (c * 1.8)+32;
        float c_convertido = (c -32) * 5/9;
        resposta = (escolha == 1)? f_convertido: c_convertido;
        printf("%i", resposta);
        a = ((resposta>36)? "\nTemperatura Elevada":"\nTemperatura Normal");
        printf("%s", a);
        // printf("%s", (resposta>36)? "\nTemperatura Elevada":"\nTemperatura Normal");
        break;
    default:
        break;
    }
}