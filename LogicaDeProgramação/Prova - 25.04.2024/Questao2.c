#include <stdio.h>
int somar_multiplicarMatriz()
{
    int matriz1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int matriz3[3][3] = {{2,3,6},{7,8,9},{6,4,3}};
    int matriz4[3][3] = {{3,8,6},{8,9,9},{9,6,5}};;

    int soma1 = 0;
    int soma2 = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            soma1 += matriz1[i][j] + matriz2[i][j];
        }
        
    }
    
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            soma2 += matriz3[i][j] + matriz4[i][j];
        }
        
    }

    int mult = soma1 * soma2;

    printf("\nA soma da matriz1 e matriz2 é: %i", soma1);
    printf("\nA soma da matriz3 e matriz4 é: %i", soma2);
    printf("\nA multiplicacao das somas eh: %i", mult);
    return 0;
}

int main()
{

somar_multiplicarMatriz();

}
