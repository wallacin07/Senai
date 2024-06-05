#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "AtividadeFoda.h"

void menu()
{   
    criarAgenda();
    while (1)
    {
    printf("\nO que deseja fazer na agenda?\n\n");
    printf("[1]Adicionar contato.        [5]Ordenar agenda por ordem alfabetica.\n[2]Buscar contato por nome.        [6]Remover pessoa da agenda.\n[3]Buscar contato por mes de nascimento.        [7]Imprimir agenda.\n[4]Buscar contato por mes e dia de nascimento.\n\n--");
    int decisao;
    int indice;
    char mes[16];
    char nome[25];
    char dia[6];
    scanf("%i", &decisao);
    switch (decisao)
    {
        case 1:
            adicionarNovoContato();
            printf("\nPessoa adicionada");
        break;

        case 2:
            printf("Digite o nome que quer buscar: ");
            scanf("%s", nome);
            buscarNome(nome);
        break;

            case 3:
                printf("Digite o mes dos contato(s) que quer buscar: ");
                scanf("%s", mes);
                buscarMes(mes);
            break;

            case 4:
                printf("Digite o mes dos contato(s) que quer buscar: ");
                scanf("%s", mes);
                printf("Digite o dia dos contato(s) que quer buscar: ");
                scanf("%s", dia);                
                buscarDiaeMes(mes,dia);
            break;

            case 5:
                ordenarAlfabeticamente();
                printf("\nAgenda ordenada alfabeticamente.");
            break;

            case 6:
                printf("Digite o indice da pessoa que quer remover: ");
                scanf("%i", &indice);
                retirarPessoa(indice);
            break;
            case 7:
            imprimirAgenda();
        break;
    default:
        printf("Nao existe essa opcao");
    }
}
}


int main()
{

printf("Bem vindo a sua agenda, vamos criar ela?\n");
menu();



}

