#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 256

typedef struct{

    char titulo[15];
    char dataDeCriacao[12];
    char dataDeVencimento[8];
    char status[20];

}Tarefas;



int main(){
    

    Tarefas *tarefas;
    tarefas = (Tarefas*) malloc(sizeof(Tarefas));

    int size = 0;
    int auxiliar;
    int escolha;
    while (1)
    {
    printf("\n\nBem vindo ao sistema de cadastro de tarefas\n");
    printf("Voce deseja:\n[1] adicionar tarefas\n[2] visualizar tarefas cadastradas\n[3]Atualizar tarefa\n[4]Remover tarefa\n--");
    scanf("%i", &escolha);

    switch (escolha)
    {
    case 1:
    //     if (size == 2)
    // {
    //     size +=1;
    //     tarefas = (Tarefas*) realloc(tarefas, size * sizeof(tarefas));
    // }
        size+=1;
        tarefas = (Tarefas*)realloc(tarefas, size * sizeof(Tarefas));

        printf("\nDigite o titulo da tarefa: ");
        scanf("%s", tarefas[size-1].titulo);
        printf("\nDigite a data de Criacao da tarefa: ");
        scanf("%s", tarefas[size-1].dataDeCriacao);
        printf("\nDigite a data de vencimento da tarefa: ");
        scanf("%s", tarefas[size-1].dataDeVencimento);
        printf("\nDigite o status da tarefa: ");
        scanf("%s", tarefas[size-1].status);
        
        
        break;
    case 2:
        for (int i = 0; i < size; i++)
        {
            printf("\n\nTAREFA %i\n", i+1);
            printf("\ntitulo da tarefa: %s", tarefas[i].titulo);
            printf("\ndata de criacao da tarefa: %s ", tarefas[i].dataDeCriacao);
            printf("\ndata de vencimento da tarefa: %s", tarefas[i].dataDeVencimento);
            printf("\nstatus da tarefa: %s",tarefas[i].status);
        }
        break;
        case 3:

            printf("Qual tarefa deseja atualizar? *DIGITE APENAS O NUMERO DA TAREFA*\n--");
            scanf("%i", &auxiliar);
            printf("\nDigite o titulo da tarefa: ");
            scanf("%s", tarefas[auxiliar-1].titulo);
            printf("\nDigite a data de Criacao da tarefa: ");
            scanf("%s", tarefas[auxiliar-1].dataDeCriacao);
            printf("\nDigite a data de vencimento da tarefa: ");
            scanf("%s", tarefas[auxiliar-1].dataDeVencimento);
            printf("\nDigite o status da tarefa: ");
            scanf("%s", tarefas[auxiliar-1].status);
            break;

        case 4:
            printf("Qual tarefa deseja remover? *DIGITE APENAS O NUMERO DA TAREFA*\n--");
            scanf("%i", &auxiliar);
            for (int i = auxiliar-1; i < size; i++)
            {
                tarefas[i] = tarefas[i+1];
            }
            size--;
            tarefas = (Tarefas*)realloc(tarefas, size * sizeof(Tarefas));
            break;
    default:
        break;
    }
    
    }




}