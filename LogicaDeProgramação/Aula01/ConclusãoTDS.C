#include <stdio.h>

int main()
{

char nome[50];
char datanascimento[12];
char cpf [13];


printf("Escreva seu nome com sobrenome: ");
gets(nome);
printf("Escreva sua data de nascimento: ");
gets(datanascimento);
printf("Escreva seu cpf sem pontuação: ");
gets(cpf);

printf("\nCertifico que o aluno %s, nascido em %s, portador do cpf %s, concluiu o curso de Desenvolvimento de Sistemas\n", nome, datanascimento, cpf);
return 0;
}
