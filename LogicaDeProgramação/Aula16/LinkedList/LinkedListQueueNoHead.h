#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedListNoHead{
  int ano;
  struct LinkedListNoHead *next;
} LinkedListNoHead;

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
  LinkedListNoHead *aux = head->next;
  free(head);
  return aux;
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
    return head; 
  }  
}


void copyArrayForLinkedList(int *array, LinkedListNoHead **List, int tamanhoArray)
{
  for (int i = 0; i < tamanhoArray; i++)
  {
    *List = enqueue(*List,array[i]);
  }
}

void copyLinkedListForArray(LinkedListNoHead *List,int *array)
{
  int i = 0;
  while (List != NULL)
  {
    array[i] = List->ano;
    List = List->next;
    i++;
  }
}

int lenLinkedList(LinkedListNoHead *List){
  int len = 0;
    while(List)
  {
    len++;
    List = List->next;
  }
  return len;
}