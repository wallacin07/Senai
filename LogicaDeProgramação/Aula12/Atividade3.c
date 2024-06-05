#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[15];
    int numero_matricula;
    int nota1_prova;
    int nota2_prova;
    int nota3_prova;

}Aluno;



int main()
{
    Aluno alunos[5];
    
    int maior_nota1;
    int maior_media;
    int menor_media;
    int medias[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o nome do aluno %i: ", i+1);
        scanf("%s", alunos[i].nome);

        printf("\nDigite o numero de matricula do aluno %i: ", i+1);
        scanf("%i", &alunos[i].numero_matricula);

        printf("\nDigite a nota 1 do aluno %i: ", i+1);
        scanf("%i", &alunos[i].nota1_prova);

        printf("\nDigite a nota 2 do aluno %i: ", i+1);
        scanf("%i", &alunos[i].nota2_prova);

        printf("\nDigite o nota 3 do aluno %i: ", i+1);
        scanf("%i", &alunos[i].nota3_prova);
        
        medias[i] = (alunos[i].nota1_prova + alunos[i].nota2_prova + alunos[i].nota3_prova)/3;

        if (medias[i] >= 6)
        {
            printf("\nAluno %i : Aprovado", i+1);
        }
        else
            printf("\nAluno %i : Reprovado", i+1);
    }


    for (int i = 0; i < 4; i++)
    {
        maior_nota1 = (alunos[i].nota1_prova > alunos[i+1].nota1_prova)? alunos[i].nota1_prova: alunos[i+1].nota1_prova;
        maior_media = (medias[i] > medias[i+1])?  medias[i] : medias[i+1];
        menor_media = (medias[i] < medias[i+1])?  medias[i] : medias[i+1];
    }
    printf("\nMaior media: %i", maior_media);
    printf("\nMaior nota da primeira prova: %i", maior_nota1);
    printf("\nMenor media: %i", menor_media);

}