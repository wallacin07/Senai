#include <stdio.h>

int main()
{
    int matriz [4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int soma = 0;
    int conferir = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j <4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        
    }    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <4; j++)
        {
            soma += matriz[i][j];
        }
        
    }
    printf("soma dos numeros da matriz: %i", soma);


    for (int z = 0; z <=16; z++)
    {
        conferir += z;
    }
    printf("\nConferir: %i", conferir);
}