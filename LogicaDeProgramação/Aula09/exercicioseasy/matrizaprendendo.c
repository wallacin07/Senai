#include <stdio.h>

int main()
{
    char matriz [2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            printf("\ndiga o numero que ira na linha %i, coluna %i, da matriz", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
        
    }


    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j <2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        
    }    
}