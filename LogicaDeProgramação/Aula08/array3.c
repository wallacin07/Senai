#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int IANES()
{
    int escolha = 0;
 printf("\nBem vindo ao sistema de alunos IANES.\nO que deseja fazer?\n\n1-ver lista de alunos\n2 - adicionar alunos juntos com suas notas\n--");
 scanf("%i", &escolha);
 switch (escolha)
 {
 case 1:
    ver_alunos();
    break;
 case 2:
 adicionar_alunos();

 }
}

void ver_alunos()
{
    FILE *f;
    char url[] = "alunos.txt";
    f = fopen(url, "r");
    char buffer[MAX_LENGTH];

        while (fgets(buffer, MAX_LENGTH, f))
            printf("%s", buffer);
}

void adicionar_alunos()
{
    FILE *f;
    char url[] = "alunos.txt";
    char aluno[35]; 
    char curso[30];
    int notas[4];
    printf("\nDiga o nome do aluno: ");
    scanf("%30[^\n]", &aluno);
    printf("\nDiga o nome do curso do aluno: ");
    scanf("%s", curso);
    printf("\nDiga a nota 1: ");
    scanf("%i", &notas[0]);
    printf("\nDiga a nota 2: ");
    scanf("%i", &notas[1]);
    printf("\nDiga a nota 3: ");
    scanf("%i", &notas[2]);
    int *ptr = notas;
    int media = medianota(ptr);

    f = fopen(url,"a");
    fprintf(f,"\nAluno: %s, Curso: %s.\nNotas: %i, %i, %i. Media das notas: %i\n ", aluno,curso,notas[0],notas[1],notas[2], media);
    fclose(f);
}

int main()
{
    while (1)
    {
    int sair = 0;
    IANES();
    printf("Voce deseja continuar adicionando alunos\n1 - sim\n2 - nao\n --");
    scanf("%i", &sair);
    if (sair == 2)
    {
        break;
    }
    
    }
    
}

int medianota(int *ptr)
{
    int media = 0;
    int somar= 0;
    // int *ponteiro;
    for (int i = 0; i < 3; i++)
    {
        somar += *(ptr + i);
        printf("%d\n", somar);
    }
    media = somar/3;
}

