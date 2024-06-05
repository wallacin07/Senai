#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
int erros = 0 ;
int ganhou = 0;
int main()
{

    srand(time(NULL));
    char words[4][15] = {"chile","china", "egito", "libia"};
    char *randword = words[rand()% 4];
    printf(" _____\n|     |\n|\n|\n|__________________________________________________");
    char secreto[11] = "1__________";
while (1)
{

    char n;    
    // printf("%d", sizeof(words[0]) / sizeof(words[0]) - 1);
    fflush(stdin);
    printf("Digite uma letra: ");
    scanf("%s",&n);
    guess(n, randword, secreto);
    printf("\n");
    graficos(erros);
    if (erros == 6)
    {
        break;
    }
    if (ganhou == 1)
    {
        printf("Voce ganhoooouu");
        break;
    }
    
}


return 0;
}

void guess(char n, char randword[],char secreto[])
{
    int i = 0;
    int tamanho = strlen(randword);
    int x = 0;

        for(i=0;i < tamanho;i++)
        {
            if (n == randword[i])
            {
                // printf("\nA letra esta na posição: %i\n\n", i+1);
                x = 1;
                secreto[i+1] = n;
            }
            
            

            if (secreto == randword)
            {
                ganhou == 1;
            }
            
            // else if (n != randword[i] & i == tamanho-1)
            // {
            //     printf("nao tem essa letra\n");
            //     erros++;
            // }
            
        }
        for ( int j = 1; j <= tamanho; j++)
        {
                printf(" %c ", secreto[j]);

        }
        if (!x)
        {
            erros++;
        }
        
        
}

int graficos(int erros)
{
    if (erros == 0)
    printf(" _____\n|     |\n|\n|\n|__________________________________________________");
    if (erros == 1 )
        printf(" _____\n|     |\n|     O\n|\n|__________________________________________________");
    if (erros == 2 )
        printf(" _____\n|     |\n|     O\n|     |\n|__________________________________________________");
    if (erros == 3 )
        printf(" _____\n|     |\n|     O\n|    /|\n|\n|\n|_______________________");
    if (erros == 4 )
        printf(" _____\n|     |\n|     O\n|    /|\\\n|\n|\n|______________");
    if (erros == 5 )
        printf(" _____\n|     |\n|     O\n|    /|\\\n|    /\n|\n|_________________________");
    if (erros == 6 )
        printf(" _____\n|     |\n|     O\n|    /|\\\n|    / \\\n|\n|_________________");
        return 0;
}

// void palavrasecreta(char randword,int tamanho)
// {



// }