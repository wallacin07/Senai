#include <stdio.h>
#include <stdlib.h>

void push(int num, int *vetor, int *tamanho) {
    (*tamanho)++;
    vetor = (int *)realloc(vetor, *tamanho * sizeof(int));
    vetor[*tamanho - 1] = num; 
}

void pop(int *vetor, int *tamanho) {
    vetor[*tamanho - 1] = NULL;
    (*tamanho)--;
    vetor = (int *)realloc(vetor, *tamanho * sizeof(int));
}

void top(int *vetor, int *tamanho) {
    if (*tamanho == 0) {
        printf("Pilha sem nada\n");
        return;
    }
    printf("%d\n", vetor[*tamanho - 1]);
}


int main()
{
    int *vetor;
    int tamanho;
    vetor = malloc(3 * sizeof(int));
    tamanho = sizeof(vetor);
    push(21,vetor,&tamanho);
    push(23,vetor,&tamanho);
    push(25,vetor,&tamanho);
    push(21,vetor,&tamanho);
    pop(vetor,&tamanho);
    top(vetor,&tamanho);
}

