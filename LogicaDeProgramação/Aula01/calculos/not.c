#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nEscreva o segundo numero: ");
    scanf("%d", &num2);

    int not_num1 = ~num1;
    int not_num2 = ~num2;
    printf("\n %i \n %i", not_num1, not_num2);

    return 0;
}