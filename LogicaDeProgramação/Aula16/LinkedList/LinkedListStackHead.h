

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo{
  int ano;
  struct Veiculo *next;
}Veiculo;


Veiculo *criarLista() {
    Veiculo *cabecalho = (Veiculo*)malloc(sizeof(Veiculo));
    if (cabecalho) {
        cabecalho->next = NULL; 
    }
    return cabecalho;
}

void displayLL(Veiculo *cabecalho)
{
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


Veiculo *push(Veiculo *Primeiro, int conteudo){  
    Veiculo *pNode = (Veiculo*)malloc(sizeof(Veiculo));
  if (!pNode) return NULL; 

  pNode->ano = conteudo;
  pNode->next = NULL;

    Veiculo *atual = Primeiro;
    while (atual->next != NULL) {
      atual = atual->next;
    }
    atual->next = pNode;
    return Primeiro; 
  }  

Veiculo *pop(Veiculo *Primeiro){  
    if (Primeiro->next == NULL) {
        printf("A lista está vazia. Não há elementos para remover.\n");
        return Primeiro;
    } else {
        Veiculo *atual = Primeiro;
        Veiculo *anterior = NULL;

        // Encontra o penúltimo nó
        while (atual->next != NULL) {
            anterior = atual;
            atual = atual->next;
        }

        // Remove o último nó
        free(atual);
        if (anterior != NULL) {
            anterior->next = NULL; 
        } else {
            Primeiro->next = NULL; 
        }

        return Primeiro; 
    }  
}


void *top(Veiculo *Primeiro){
    Veiculo *aux;
    aux= Primeiro->next;
    while (aux->next != NULL) {
      aux = aux->next;
    }
    printf(" %d", aux->ano);
    printf("\n");
}




