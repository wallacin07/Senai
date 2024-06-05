#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo {
    int ano;
    struct Veiculo *next;
} Veiculo;

Veiculo *criarLista() {
    Veiculo *cabecalho = (Veiculo*)malloc(sizeof(Veiculo));
    if (cabecalho) {
        cabecalho->next = NULL; 
    }
    return cabecalho;
}

void displayLL(Veiculo *cabecalho) {
    printf("Mostrando a lista:\n");
    Veiculo *p = cabecalho->next; 
    while (p) {
        printf(" %d", p->ano);
        p = p->next;
    }
    printf("\n");
}

void liberarLista(Veiculo *cabecalho) {
    Veiculo *p = cabecalho;
    while (p) {
        Veiculo *temp = p;
        p = p->next;
        free(temp);
    }
}

Veiculo *dequeue(Veiculo *cabecalho) {
    if (!cabecalho || !cabecalho->next) {
        printf("A lista está vazia.\n");
        return cabecalho; 
    }
    Veiculo *temp = cabecalho->next; 
    cabecalho->next = temp->next; 
    free(temp); 
    return cabecalho;
}

Veiculo *enqueue(Veiculo *cabecalho, int conteudo) {
    Veiculo *pNode = (Veiculo*)malloc(sizeof(Veiculo));
    if (!pNode) {
        printf("Erro de alocação de memória.\n");
        return cabecalho; 
    }

    pNode->ano = conteudo;
    pNode->next = NULL;

    Veiculo *atual = cabecalho;
    while (atual->next != NULL) {
        atual = atual->next;
    }
    atual->next = pNode;
    return cabecalho;
}

