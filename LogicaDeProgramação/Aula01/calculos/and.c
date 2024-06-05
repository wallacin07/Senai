#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nEscreva o segundo numero: ");
    scanf("%d", &num2);

    int and_num1num2 = num1&num2;

    printf("%i", and_num1num2);

    return 0;
}