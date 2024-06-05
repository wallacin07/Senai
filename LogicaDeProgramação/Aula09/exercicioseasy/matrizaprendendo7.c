#include <stdio.h>

int main()
{
    int matriz [3][2] = {{5,6},{7,3},{9,5}};
    int soma1 = 0;
    int soma2 = 0;
    int soma3 = 0;
    int escolha = 0;
    int acertos = 0;
    for (int j = 0; j <2; j++)
        {
            soma1 += matriz[0][j];
        }
        
    

    for (int j = 0; j <2; j++)
        {
            soma2 += matriz[1][j];
        }
        
    for (int j = 0; j <2; j++)
        {
            soma3 += matriz[2][j];
        }
    printf("Relacione as colunas\n %i + %i       %i\n %i + %i       %i\n %i + %i       %i\n",matriz[0][0],matriz[0][1],soma1, matriz[1][0],matriz[1][1],soma2, matriz[2][0],matriz[2][1],soma3);
    printf("\n");    
    printf("5+6 eh igual a\n1 - 11\n2 - 10\n3 - 14\n--");
    scanf("%i", &escolha);
    if (escolha == 1)
    {
        acertos++;
    }
    escolha = 0;
    printf("7+3 eh igual a\n1 - 11\n2 - 10\n3 - 14\n--");
    scanf("%i", &escolha);
    if (escolha == 2)
    {
        acertos++;
    }
    escolha = 0;
    printf("9+5 eh igual a\n1 - 11\n2 - 10\n3 - 14\n--");
    scanf("%i", &escolha);
    if (escolha == 3)
    {
        acertos++;
    }
    printf("Voce acertou %i", acertos);        
    }
