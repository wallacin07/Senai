#include <stdio.h>
#include <stdlib.h>

int matriz_vetor()
{
    int array[4][4];
    int array2[16];
    int z = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
        int numero;
        printf("\ndigite um numero : ");
        scanf("%i", &numero);
        array[i][j] = numero;
            
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array2[z] = array[i][j];
            z++;
        }
        
    }

        printf("\nMatriz: ");
    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
        printf("%i ", array[i][j]);
        }
        
    }


            printf("\n\nArray: ");
    for (int i = 0; i < 16; i++)
    {
        printf("%i ", array2[i]);
    }
    return 0;
}

int main()
{
    matriz_vetor();
}
