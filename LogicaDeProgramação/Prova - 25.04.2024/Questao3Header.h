#include <stdio.h>
#include <stdlib.h>
#ifndef Questao3Header_H
#define Questao3Header_H

int alocar_memoria()
{
    int tamanho = 0;
    printf("digite o tamanho do array que voce quer: ");
    scanf("%i", &tamanho);

    int *array;
    array = malloc(tamanho*sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        int numero;
        printf("digite o numero %i da array: ", i+1);
        scanf("%i", &numero);
        array[i] = numero;
    }
    printf("Array: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%i ", array[i]);
    }

    return 0;
}
#endif



