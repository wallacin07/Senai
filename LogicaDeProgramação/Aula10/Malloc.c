#include <stdio.h>
#include <stdlib.h>
int numero_elementos;

int soma_impares()
{
    int soma = 0;
    int numero;
    printf("Diga quantos numeros deseja colocar\n--");
    scanf("%i", &numero_elementos);
    int *array = malloc(numero_elementos*sizeof(int));
    for (int i = 0; i < numero_elementos; i++)
    {
        printf("Digite o numero %i do array\n--", i+1);
        scanf("%i", &numero);
        array[i] = numero;
    if (numero % 2 == 1)
    {
        soma += numero;
    }
    }
        printf("Vetor: ");
    for (int i = 0; i < numero_elementos; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\nA soma dos numeros impares é: %i", soma);
    free(array);

    return 0;
}
int main()
{
    soma_impares();
}