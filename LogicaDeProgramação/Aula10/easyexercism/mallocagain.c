#include <stdio.h>
#include <stdlib.h>

int matriz_vetor()
{
    int matriz[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int tamanho = sizeof(matriz);
    int *array = malloc(tamanho);
    int z = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[z] = matriz[i][j];
            z++;
        }
        
    }
    



    for (int i = 0; i < tamanho / 4; i++)
    {
        printf("%i ", array[i]);
    }
    free(array);



    // int numero;
    // printf("Diga quantos numeros deseja colocar\n--");
    // scanf("%i", &numero_elementos);
    // for (int i = 0; i < numero_elementos; i++)
    // {
    //     printf("Digite o numero %i do array\n--", i+1);
    //     scanf("%i", &numero);
    //     array[i] = numero;
    // }
    // printf("\nArray: ");
    return 0;
}
int main()
{
    matriz_vetor();
}