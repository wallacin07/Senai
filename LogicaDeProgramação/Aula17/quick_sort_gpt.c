#include <stdio.h>

int particion(int *array, int inicio, int fim) {
    int pivo = array[fim];
    int j = inicio - 1; // Inicializa o índice do menor elemento

    for (int i = inicio; i < fim; i++) {
        if (array[i] <= pivo) {
            j++;
            // Troca array[i] com array[j]
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    // Coloca o pivo na posição correta
    int temp = array[j + 1];
    array[j + 1] = array[fim];
    array[fim] = temp;

    return j + 1;
}

void quickSort(int *array, int inicio, int fim) {
    if (inicio < fim) {
        int m = particion(array, inicio, fim);

        quickSort(array, inicio, m - 1);
        quickSort(array, m + 1, fim);
    }
}

int main() {
    int array[10] = {1, 7, 9, 2, 4, 3, 6, 0, 8, 5};
    quickSort(array, 0, 9);

    // Imprime o array ordenado
    printf("Array ordenado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
