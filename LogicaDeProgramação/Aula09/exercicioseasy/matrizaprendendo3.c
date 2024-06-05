#include <stdio.h>

int main()
{
    int matriz [2][2] = {{1,2},{3,4}};
    int tamanho = 0;
    int elementos = 0;
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j <2; j++)
        {   
            elementos++;
            printf("%d ", matriz[i][j]);
        }
        
    }    

            tamanho = sizeof(matriz[0][0])*elementos;
            printf("Tamanho: %i", tamanho);
}