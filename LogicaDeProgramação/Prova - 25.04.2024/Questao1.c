#include <stdio.h>
int comparar_somas(int tamanho_array1, int tamanho_array2)
{
    int array1[tamanho_array1];
    int array2[tamanho_array2];
    int soma1 = 0;
    int soma2 = 0;
    for (int i = 0; i < tamanho_array1; i++)
    {
        int numero;
        printf("\ndiga o numero %i da array1: ", i+1);
        scanf("%i", &numero);
        array1[i] = numero;
        soma1 += numero;
    }

        for (int i = 0; i < tamanho_array2; i++)
    {
        int numero;
        printf("\ndiga o numero %i da array2: ", i+1);
        scanf("%i", &numero);
        array2[i] = numero;
        soma2 += numero;
    }
////////////////////////////////////////////////////////////////////////
                // print
    printf("Array1:");
            for (int i = 0; i < tamanho_array1; i++)
    {
        printf("%i ", array1[i]);
    }

    printf("\nArray2:");

    for (int i = 0; i < tamanho_array2; i++)
    {

        printf("%i ", array2[i]);

    }





////////////////////////////////////////////////////////////////////
            // c o m p a r a ç a o


    if (soma1>soma2)
    {
        printf("\nsoma dos elementos do array1 e maior que do array2\n");
    }
    else
        printf("\nsoma dos elementos do array2 e maior que do array1\n");


    return 0;
}

int main()
{
    int tamanho1 = 0;
    int tamanho2 = 0;

    printf("Diga o tamanho que voce quer para o array1: ");
    scanf("%i", &tamanho1);
    printf("\nDiga o tamanho que voce quer para o array2: ");
    scanf("%i", &tamanho2);

    comparar_somas(tamanho1,tamanho2);
}
