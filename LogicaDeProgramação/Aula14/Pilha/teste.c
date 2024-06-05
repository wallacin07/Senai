#include <stdio.h>
#include "Pilha.h"

int main() {
    pilha Pilha;

    Pilha.values = constructorStack(Pilha.values);
    Pilha.quantity = sizeof(Pilha.values);
    
    push(1, Pilha.values, &Pilha.quantity);
    push(2, Pilha.values, &Pilha.quantity);
    push(3, Pilha.values, &Pilha.quantity);
    top(Pilha.values, &Pilha.quantity);
    push(7, Pilha.values, &Pilha.quantity);
    push(5, Pilha.values, &Pilha.quantity);
    push(9, Pilha.values, &Pilha.quantity);
    push(10, Pilha.values, &Pilha.quantity);
    push(15, Pilha.values, &Pilha.quantity);
    printStack(Pilha.values,&Pilha.quantity);
    return 0;
}