#include <stdio.h>
#include <stdlib.h>
int numero_elementos;

int soma_indices()
{
    int numero;
    int soma = 0;
    printf("Diga quantos numeros deseja colocar na array 1 e 2\n--");
    scanf("%i", &numero_elementos);
    int *array1 = malloc(numero_elementos*sizeof(int));
    int *array2 = malloc(numero_elementos * sizeof(int));
    int *array3 = malloc(numero_elementos * sizeof(int));

    for (int i = 0; i < numero_elementos; i++)
    {
        printf("Digite o numero %i do array1\n--", i+1);
        scanf("%i", &numero);
        array1[i] = numero;
        soma = i*2;
        array3[i] = soma;
    }

    for (int i = 0; i < numero_elementos; i++)
    {
        printf("Digite o numero %i do array2\n--", i+1);
        scanf("%i", &numero);
        array2[i] = numero;

    }

    // for (int i = 0; i < numero_elementos; i++)
    // {
    //     array3[i] = soma;
    // }

    printf("\nArray1: ");
    for (int i = 0; i < numero_elementos; i++)
    {
        printf("%i ", array1[i]);
    }

    printf("\nArray2: ");
    for (int i = 0; i < numero_elementos; i++)
    {
        printf("%i ", array2[i]);
    }
    printf("\nArray3: ");
    for (int i = 0; i < numero_elementos; i++)
    {
        printf("%i ", array3[i]);
    }


    free(array1);
    free(array2);
    free(array3);
    return 0;
}
int main()
{
    soma_indices();
}