#include <stdio.h>
#include <stdlib.h>
int numero_linhas;
int numero_colunas;

int alocacao_matriz()
{
    int i;
    int j;
    printf("Diga quantas linhas deseja ter\n--");
    scanf("%i", &numero_linhas);

    int **M; 
    M = malloc (numero_linhas * sizeof (int*));
    printf("Diga quantas colunas deseja ter\n--");
    scanf("%i", &numero_colunas);
    for (int i = 0; i < numero_linhas; ++i)
    {
    M[i] = malloc (numero_colunas * sizeof (int));
    }


    for (i = 0; i < numero_linhas; i++)
    {
       for (j = 0; j < numero_colunas; j++)
       {
        printf("Digite o numero %i da linha %i\n--", j+1,i+1);
        scanf("%i", &M[i][j]);
       }
    }


    printf("Matriz: ");
    for (i = 0; i < numero_linhas; i++)
    {
        printf("\n");
       for (j = 0; j < numero_colunas; j++)
       {
        printf("%i ",M[i][j]);
       }
    }
    free(M);
    return 0;
}
int main()
{
    alocacao_matriz();
}