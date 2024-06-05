#include <stdio.h>

int main()
{
    int a,b,escolha;
    printf("Digite qual calculo logico voce quer fazer\n1 - NOT\n2 - AND\n3 - OR\n4 - XOR\n--");
    scanf("%i", &escolha);
    switch (escolha)
    {
        case 1:
            printf("digite o valor do primeiro numero: ");
            scanf("%i", &a);
            printf("digite o valor do segundo numero: ");
            scanf("%i", &b);
            int not_a = ~a;
            int not_b = ~b;
            printf("\nNot 1: %i \nNot 2: %i", not_a, not_b);
            break;
        case 2:
             printf("digite o valor do primeiro numero: ");
            scanf("%i", &a);
            printf("digite o valor do segundo numero: ");
            scanf("%i", &b);
            int and_ab = a&b;
            printf("And: %i", and_ab);
            break;
        case 3:    
            printf("digite o valor do primeiro numero: ");
            scanf("%i", &a);
            printf("digite o valor do segundo numero: ");
            scanf("%i", &b);
            int or_ab = a|b;
            printf("%i", or_ab);
        case 4:
            printf("digite o valor do primeiro numero: ");
            scanf("%i", &a);
            printf("digite o valor do segundo numero: ");
            scanf("%i", &b);
            int xor_ab = a^b;
            printf("%i", xor_ab);
    default:
        break;
    }
    return 0;
}