#include <stdio.h>
#include <stdlib.h>



void * retornar(int tamanhoVetor)
{
    int *array = malloc(tamanhoVetor*sizeof(int));
    for (int i = 0; i < tamanhoVetor; i++)
    {
        array[i] = i+1;
    }
    return array;
    free(array);
}

int main()
{
    int tamanho;
    printf("Digite o tamanho que quer para a array: ");
    scanf("%i", &tamanho);
    int * ptr = retornar(tamanho);
    for (int i = 0; i < tamanho; i++)
    {
    printf("%i ", ptr[i]);
    }
    
}