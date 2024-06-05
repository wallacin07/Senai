#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nEscreva o segundo numero: ");
    scanf("%d", &num2);

    int shift_left_num1 = num1<<1;
    int shift_left_num2 = num2<<1;
    printf("\n %i \n %i",shift_left_num1, shift_left_num2);

    return 0;
}