#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LinkedListNoHead{
  int ano;
  struct LinkedListNoHead *next;
}LinkedListNoHead;

void displayLL(LinkedListNoHead *p)
{
  printf("Mostrando a lista:\n"); 
  while(p)
  {
    printf(" %d", p->ano);
    p = p->next;
  }
  printf("\n");
}

void liberarLista(LinkedListNoHead *cabecalho) {
    LinkedListNoHead *p = cabecalho;
    while (p) {
        LinkedListNoHead *temp = p;
        p = p->next;
        free(temp);
    }
}

LinkedListNoHead *dequeue(LinkedListNoHead *head)
{
  LinkedListNoHead *aux;
  aux= head->next;
  head = aux;
  return head;
}


LinkedListNoHead *enqueue(LinkedListNoHead *head, int conteudo)
{
  LinkedListNoHead *pNode = (LinkedListNoHead*)malloc(sizeof(LinkedListNoHead));
  if (!pNode) return NULL; 

  pNode->ano = conteudo;
  pNode->next = NULL;

  if (head == NULL) {
    return pNode;
  } else {
    LinkedListNoHead *atual = head;
    while (atual->next != NULL) {
      atual = atual->next;
    }
    atual->next = pNode;
    return head; // Retorna a cabeça original da lista
  }  
}


void copyArrayForLinkedList(int *array, LinkedListNoHead *List, int tamanhoArray)
{
  int i = 0;
  while (i < tamanhoArray)
 {
    enqueue(List,array[i]);
    i++;
 }
 
}

void copyLinkedListForArray(LinkedListNoHead *List,int *array)
{
  int i = 0;
  while (List->next != NULL)
  {
    array[i] = List->ano;
    List = List->next;
    i++;
  }
  
}





