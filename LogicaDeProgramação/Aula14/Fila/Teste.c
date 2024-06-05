#include "Fila.h"
#include <stdio.h>


int main() {
     fila queue;

    queue.values = constructorQueue(3); // Aloca memória para 3 elementos
    queue.quantity = 0; // Fila inicialmente vazia

    enqueue(3, queue.values, &queue.quantity);
    enqueue(2, queue.values, &queue.quantity);
    enqueue(1, queue.values, &queue.quantity);

    printf("Fila após enqueue: ");
    printQueue(queue.values, &queue.quantity);

    dequeue(queue.values, &queue.quantity);

    printf("Fila após dequeue: ");
    printQueue(queue.values, &queue.quantity);

    return 0;
}