#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[15];
    int numero_matricula[10];
    int nota1_prova[10];
    int nota2_prova[10];
}Aluno;



int main()
{
    Aluno alunos[5];
    int medias[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o nome do aluno %i: ", i+1);
        scanf("%s", alunos[i].nome);

        printf("\nDigite o numero de matricula do aluno %i: ", i+1);
        scanf("%i", &alunos[i].numero_matricula[i]);

        printf("\nDigite a nota 1 do aluno %i: ", i+1);
        scanf("%i", &alunos[i].nota1_prova[i]);

        printf("\nDigite a nota 2 do aluno %i: ", i+1);
        scanf("%i", &alunos[i].nota2_prova[i]);
        
        medias[i] = ((alunos[i].nota1_prova[i]*1) + (alunos[i].nota2_prova[i]*2)  )/3;

        if (medias[i] >= 6)
        {
            printf("\nMedia Aluno %i : %i\nAprovado", i+1, medias[i]);
        }
        else
            printf("\nMedia Aluno %i : %i\nReprovado", i+1, medias[i]);
    }


}