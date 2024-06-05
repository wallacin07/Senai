#include <stdio.h>

int main()
{
    int matriz [3][2] = {{10,9},{5,6},{8,8}};
    int matriz2 [3][2] = {{10,9},{5,6},{8,8}};
    int matrizfinal[3][2];
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j <2; j++)
        {
            printf("%d ", matriz[i][j]);
            
        }
        
    }    

printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j <2; j++)
        {
            printf("%d ", matriz2[i][j]);
            
        }
        
    }  





    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <2; j++)
        {
            matrizfinal[i][j] = matriz[i][j] + matriz2[i][j]; 
        }
    }   
    
printf("\n\nMatriz final\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j <2; j++)
        {
            printf("%d ", matrizfinal[i][j]);
            
        }
        
    }  
}
