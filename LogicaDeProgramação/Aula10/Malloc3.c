#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 256
FILE *f;
int numero_elementos;

int escrita_arquivo()
{

    printf("Diga quantas palavras deseja escrever\n--");
    scanf("%i", &numero_elementos);
    char *array = malloc(15*sizeof(char));
    for (int i = 0; i < numero_elementos; i++)
    {
    
        printf("Digite a palavra que quer escrever\n--");
        scanf("%s", array);
        FILE *f;
        char url[] = "texto.txt";
        f = fopen(url, "a");
        fprintf(f,"%s ",array);
        fclose(f);
    }
    free(array);
    
//     int **M; 
//     M = malloc (numero_elementos* sizeof (char*));
//     for (int i = 0; i < numero_elementos; ++i)
//    M[i] = malloc (40 * sizeof (char));
    int opcao;
    printf("Deseja ler o que escreveu?\n1 - sim\n2 - nao\n--");
    scanf("%i", &opcao);
    if (opcao == 1)
    {
    FILE *f;
    char url[] = "texto.txt";
    f = fopen(url, "r");
    char buffer[MAX_LENGTH];
        while (fgets(buffer, MAX_LENGTH, f))
        printf("%s", buffer);
        fclose(f);
    }
    
    return 0;
}
int main()
{
    escrita_arquivo();
}