

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo{
  int ano;
  struct Veiculo *next;
}Veiculo;

void displayLL(Veiculo *p)
{
  printf("Mostrando a lista:\n"); 
  while(p)
  {
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

  if (Primeiro == NULL) {
    return pNode;
  } else {
    Veiculo *atual = Primeiro;
    while (atual->next != NULL) {
      atual = atual->next;
    }
    atual->next = pNode;
    return Primeiro; 
  }  }

Veiculo *pop(Veiculo *Primeiro){  
int contador = 0;
  if (Primeiro == NULL) {
    return NULL;
  } else {
    Veiculo *atual = Primeiro;
    while (atual->next != NULL) {
      atual = atual->next;
      contador++;
    }
    for (int i = 0; i < contador; i++)
    {
        Veiculo *atual = Primeiro;
        atual = atual->next;
        if (i == contador-1 )
        {
            free(atual->next);
            atual->next = NULL;
            i++;
        }
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




