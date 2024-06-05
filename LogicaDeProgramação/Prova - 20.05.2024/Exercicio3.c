#include <stdio.h>
#include <stdlib.h>

void enqueue(int num, int *fila, int *quantidade) {
    (*quantidade)++;
    fila = (int *)realloc(fila, *quantidade * sizeof(int));
    fila[*quantidade - 1] = num;
}

void dequeue(int *fila, int *quantidade) {
    for (int i = 0; i < *quantidade - 1; i++) { 
        fila[i] = fila[i + 1];
    }
    (*quantidade)--;
    fila = (int *)realloc(fila, *quantidade * sizeof(int)); 
}

void printfila(int *fila, int *quantidade) {
    for (int i = 0; i < *quantidade; i++) { 
        printf("%i ", fila[i]);
    }
    printf("\n");
}


int main()
{
    int *fila;
    fila = malloc(3*sizeof(int));
    int quantidade = 0;

    enqueue(1,fila,&quantidade);
    enqueue(3,fila,&quantidade);
    enqueue(2,fila,&quantidade);
    dequeue(fila,&quantidade);
    printfila(fila,&quantidade);
}