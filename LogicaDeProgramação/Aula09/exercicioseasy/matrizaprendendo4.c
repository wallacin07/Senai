#include <stdio.h>

int main()
{
    int matriz [3][3] = {{10,9,8},{5,6,7},{8,8,8}};


    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j <3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        
    }    
    for (int i = 0; i < 3; i++)
    {
        int media = 0;
        for (int j = 0; j <3; j++)
        {
            media += matriz[i][j]; 
        }
        media /= 3;
        printf("\nMedia do aluno %i: %i",i+1,media);
    }
}