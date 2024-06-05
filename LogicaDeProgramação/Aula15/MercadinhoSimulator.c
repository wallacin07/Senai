#include "Fila.h"
#include <stdio.h>
#include <windows.h>

void filinha()
{
    fila queue;
    queue.values = constructorQueue(6); // Aloca memória para 3 elementos
    queue.quantity = 0; // Fila inicialmente vazia
    // int fds;
    int escolha = 0;
    printf("Bem vindo ao simulador, qual o horario que gostaria de escolher?\n[1] 8 as 17\n[2] 17 as 22\n--");
    scanf("%i", &escolha);
    int quantidadeDeClientes = 0;
    switch (escolha)
    {
        case 1:
            
        for (int i = 1; i < 26 ; i++)
        {
            if (i % 4 == 0 )
            {
                dequeue(queue.values,&queue.quantity);
                printf("\nUm cliente desistiu\n");
                quantidadeDeClientes--;
            }
            enqueue(i,queue.values,&queue.quantity);
            quantidadeDeClientes++;
            printf(" %i \n\n", i+1);
            printf("Passando as compras do cliente\n--");
            // printf("[1] passar compras do cliente\n--");
            // scanf("%i", &fds);
            printf("\n\n");
            Sleep(100);
            printf("Voce passou a compra do cliente\n");
            printf("Cobrando o cliente pelo pagamento\n--");
            // printf("[1] cobrar o cliente pelo pagamento\n--");
            // scanf("%i", &fds);
            printf("\n\n");
            Sleep(100);
            printf("Compra finalizada\n");
            quantidadeDeClientes--;
            enqueue(i,queue.values,&queue.quantity);
            quantidadeDeClientes++;
            enqueue(i,queue.values,&queue.quantity);
            quantidadeDeClientes++;
            printf("\nAinda restam %i clientes\n\n", quantidadeDeClientes);
            printf("[Caixa(Voce)]    ");
            for (int i = 0; i < quantidadeDeClientes; i++)
            {
                printf("[Cliente %i] ",i+1);
            }
            
            Sleep(500);
            system("cls");
            
        }
        break;
        case 2:
        for (int i = 0; i < 100 ; i++)
        {
                    for (int i = 1; i < 26 ; i++)
        {
            if (i % 3 == 0)
            {
                dequeue(queue.values,&queue.quantity);
                printf("\nUm cliente desistiu\n");
                quantidadeDeClientes--;
            }
            enqueue(i,queue.values,&queue.quantity);
            quantidadeDeClientes++;
            printf("O cliente %i chegou\n\n", i);
            printf("Passando as compras do cliente\n--");
            // printf("[1] passar compras do cliente\n--");
            // scanf("%i", &fds);
            printf("\n\n");
            Sleep(500);
            printf("Voce passou a compra do cliente\n");
            printf("Cobrando o cliente pelo pagamento\n--");
            // printf("[1] cobrar o cliente pelo pagamento\n--");
            // scanf("%i", &fds);
            printf("\n\n");
            Sleep(500);
            printf("Compra finalizada\n");
            quantidadeDeClientes--;
            enqueue(i,queue.values,&queue.quantity);
            quantidadeDeClientes++;
            printf("\nAinda restam %i clientes\n\n", quantidadeDeClientes);
            printf("[Caixa(Voce)]    ");
            for (int i = 0; i < quantidadeDeClientes; i++)
            {
                printf("[Cliente %i] ",i+1);
            }
            
            Sleep(2500);
            system("cls");
        } 
            break;
        default:
            break;
    }
}
}

int main()
{
 filinha();
     // Clear the console screen
    return 0;
}

