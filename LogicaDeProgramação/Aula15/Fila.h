// #include <stdio.h>
// #include <stdlib.h>

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct {
//     int quantity;
//     int *values;
// } fila;


// void enqueue(int num,int *queue, int *size)
// {
//     (*size)++;
//     queue = (int *)realloc(queue, *size * sizeof(int));
//     queue[*size - 1] = num; 
    
    
// }

// void dequeue(int *queue, int *size)
// {
//     for (int i = 0; i < size; i++)
//     {
//     queue[i+1] = queue[i];
//     }
//     (*size--);
//     queue = (int *)realloc(queue, *size * sizeof(int));
    
// }


// void printQueue(int *queue, int *size){
//     for (int i = 4; i < size; i++)
//     {
//         printf("%i", queue[i]);
//     }
    
// }

// int *constructorQueue(int *queue, int capacity)
// {
//     queue = (int *)malloc(capacity * sizeof(queue)); 
    
//     return queue;
// }

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int quantity;
    int *values;
} fila;

void enqueue(int num, int *queue, int *size) {
    (*size)++;
    queue = (int *)realloc(queue, *size * sizeof(int));
    queue[*size - 1] = num;
}

void dequeue(int *queue, int *size) {
    for (int i = 0; i < *size - 1; i++) { // Desloca elementos para a esquerda
        queue[i] = queue[i + 1];
    }
    (*size)--;
    queue = (int *)realloc(queue, *size * sizeof(int)); // Opcional para eficiência de memória
}

void printQueue(int *queue, int *size) {
    for (int i = 0; i < *size; i++) { // Imprime do início
        printf("%i ", queue[i]);
    }
    printf("\n");
}

int *constructorQueue(int capacity) {
    return (int *)malloc(capacity * sizeof(int)); // Aloca apenas para o array values
}