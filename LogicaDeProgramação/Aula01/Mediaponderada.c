#include <stdio.h>
int main()
{

int peso1 = 2;
int peso2 = 3;
int peso3 = 5;
int pesofinal = peso1+peso2+peso3;


int nota1 = 100;
int nota2 = 80;
int nota3 = 95;

float mediaponderada = (nota1*peso1 + nota2*peso2 + nota3*peso3)/pesofinal;
printf("Sua media é: %f", mediaponderada);

}