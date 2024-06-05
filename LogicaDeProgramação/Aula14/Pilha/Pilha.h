#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int quantity;
    int *values;
} pilha;

void push(int num, int *stack, int *size) {
    (*size)++;
    stack = (int *)realloc(stack, *size * sizeof(int));
    stack[*size - 1] = num; // Corrected indexing
}

void pop(int *stack, int *size) {
    stack[*size - 1] = NULL;
    (*size)--;
    stack = (int *)realloc(stack, *size * sizeof(int));
}

void top(int *stack, int *size) {
    if (*size == 0) {
        printf("Stack is empty\n");
        return;
    }
    printf("%d\n", stack[*size - 1]); // Corrected indexing
}

void printStack(int *stck, int *size){
    for (int i = 4; i < *size; i++)
    {
        printf("%i\n", stck[i]);
    }
    
}

int *constructorStack(int *stck) {
    stck = malloc(3*sizeof(int)); // Allocate for values array
    return stck;
}
