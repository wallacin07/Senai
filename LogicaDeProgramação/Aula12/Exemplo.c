#include <stdio.h>
#include <string.h>

typedef struct
{
    int idade;
    char *nome[25];
    char *cpf[18];
    char *genero;
}Pessoa;




int main()
{
    Pessoa pessoa1;
    pessoa1.idade = 17;
    strcpy(pessoa1.nome,"Wallace");
    strcpy(pessoa1.cpf , "111.222.333-43");
    pessoa1.genero = 'M';


    printf("%s, %s, %c, %i", pessoa1.nome,pessoa1.cpf, pessoa1.genero, pessoa1.idade);
    return 0;
}