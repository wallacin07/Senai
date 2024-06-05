#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[15];
    int numero_matricula;
    char curso[15];

}Aluno;



int main()
{

    Aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("Digite o numero de matricula do aluno: ");
        scanf("%i", &alunos[i].numero_matricula);
        printf("Digite o curso do aluno: ");
        scanf("%s", alunos[i].curso);
    }
        for (int i = 0; i < 5; i++)
    {
        printf("\nAluno%i:\n", i);
        printf("Nome: %s  ", alunos[i].nome);

        printf("Matricula: %i", alunos[i].numero_matricula);
  
        printf("Curso :%s", alunos[i].curso);
    }


}