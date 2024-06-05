#include <stdio.h>
#include <stdlib.h>
#ifndef HEADER_H
#define HEADER_H

int array()
{
    int vetor[10];
    printf("Insira os 10 valores que quer printar\n");
    for (int i = 0; i < 10; i++)
    {
        int numero;
        scanf("%i", &numero);
        vetor[i] = numero;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", vetor[i]);
    }
        return 0;
}

#endif