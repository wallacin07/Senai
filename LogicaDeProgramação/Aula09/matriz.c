#include <stdio.h>

int main()
{
    char materias [4][15] = {"Fisica", "Matematica", "Geografia", "Artes"};
    adicionar_no_sistema(&materias);
    
}

void adicionar_no_sistema(char *materias)
{
    FILE *f;
    char url[] = "sistema.txt";
    int numero_alunos = 0;
    printf("Diga quantos alunos voce quer adicionar: ");
    scanf("%i", &numero_alunos);
    char nome_aluno[numero_alunos][20];
    char nome[20];
    for (int i = 0; i <= numero_alunos; i++)
    {
        f = fopen(url, "a");
        fprintf(f, "Ta funcionando");
        fclose(f);
        printf("Escreva o nome que deseja colocar");
        gets(nome);
        int nota1;
        int nota2;
        int nota3;
        int nota4;
        printf("Escreva a nota de fisica do aluno: ");
        scanf("%s", &nota1);
        printf("Escreva a nota de fisica do aluno: ");
        scanf("%s", &nota2);
        printf("Escreva a nota de fisica do aluno: ");
        scanf("%s", &nota3);
        printf("Escreva a nota de fisica do aluno: ");
        scanf("%s", &nota4);
        f = fopen(url,"a");
        fprintf(f,"\nAluno: %s\n materias: %s: Notas: %i.\n%s: Notas: %i\n%s Notas: %i\n%s Notas: %i\n ",nome_aluno[i][20],materias[0], nota1,materias[1],nota2,materias[2],nota3,materias[3], nota4);
        fclose(f);
    }
}