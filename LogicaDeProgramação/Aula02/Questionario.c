
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i = 0, acertos = 0;
    FILE * arq;
    arq = fopen("acertos.txt", "w");
    printf("bem vindo a sua provinha de matematica\n");
    while(i<5)
    {
        srand(time(NULL));
        int a = (rand() % 100), b =(rand()% 100), c = a+b, palpite;

        printf("Escreva qual o resultado de %i+%i: ", a, b);
        scanf("%i", &palpite);
        if (palpite == c)
        {
        printf("\nParabens voce acertou!!\n");
         ++i;
         ++acertos;
        }

        else
        {
        printf("O resultado era %i\n", c);
        ++i;
        }

        if(i == 5)
        {
        printf("\nVoce acertou %i vezes", acertos);
        }

    }
    fprintf(arq, "Voce acertou %i vezes", acertos);
    fclose(arq);
    return 0;
}