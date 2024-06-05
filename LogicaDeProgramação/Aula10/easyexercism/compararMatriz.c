#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void compararmatriz (int Qtdpalavras)
{
    int i;
    char **matriz1 = malloc(Qtdpalavras * sizeof(char*));
    char **matriz2 = malloc(Qtdpalavras * sizeof(char*));
    char **matriz3= malloc(Qtdpalavras * sizeof(char*));
    for (int i = 0; i < Qtdpalavras; i++)
    {
        matriz3[i] = malloc(11 * sizeof(char));
    }
    
    char diferente[11] = "diferente";
    char igual[11] = "Igual";
    for (i = 0; i < Qtdpalavras; i++)
    {
        char palavra[18];
        printf("Qual a palavra que deseja colocar na linha %i da matriz1: ", i+1);
        scanf("%s", palavra);
        printf("%s\n", palavra);
        int tamanho = strlen(palavra);
        matriz1[i] = malloc(tamanho);
        matriz1[i] = palavra;
        char palavra2[18];
        printf("Qual a palavra que deseja colocar na linha %i da matriz2: ", i+1);
        scanf("%s", palavra2);
        printf("%s\n", palavra2);
        int tamanho2 = strlen(palavra2);
        matriz2[i] = malloc(tamanho2);
        matriz2[i] = palavra2;

        if (tamanho != tamanho2)
        {
        matriz3[i] = diferente;
        }
        else
        {
        for (int j = 0; j < tamanho; j++)
        {
            if (matriz1[i][j] != matriz2[i][j])
            {
            matriz3[i] = diferente;
            }
            else if (matriz1[i][j] == matriz2[i][j])
            {
                matriz3[i] = igual;

            }
            
        }

        }

    }
        for (int i = 0; i < Qtdpalavras; i++)
        {
        
        printf("%s\n", matriz1[i]);
        printf("%s\n", matriz2[i]);
        printf("%s\n", matriz3[i]);
            
        }
    free(matriz1);
    free(matriz2);
    free(matriz3);
    
    

}

int main()
{
    int qtdpalavras;
    printf("Digite quantas palavras deseja escrever: ");
    scanf("%d", &qtdpalavras);
    compararmatriz(qtdpalavras);
}