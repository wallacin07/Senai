#include <stdio.h>

void trocar_int(int *int1)
{
    printf("\nvalor default: %d",*int1);
    int novo1;
    printf("\nfale o novo valor de int1: ");
    scanf("%d", &novo1);
    int1 = &novo1;
    printf("\nNovo valor: %d",*int1);

}

void trocar_char(char *letter1)
{
    printf("\nvalor default: %c",*letter1);
    char novo_char;
    printf("\nfale o novo valor de letter1: ");
    scanf(" %c", &novo_char);
    letter1 = &novo_char;
    printf("\nNovo valor: %c",*letter1);
}

void trocar_float(float *float1)
{
    printf("\nvalor default: %.2f",*float1);
    float novo_float;
    printf("\nfale o novo valor de float1: ");
    scanf("%f", &novo_float);
    float1 = &novo_float;
    printf("\nNovo valor: %.2f",*float1);
}



int main()
{
 int int1 = 25;
 trocar_int(&int1);
 char letter1 = 'C';
 trocar_char(&letter1);
 float float1 = 1.25;
 trocar_float(&float1);
}