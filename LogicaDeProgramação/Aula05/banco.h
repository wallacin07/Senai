#include <stdio.h>
#ifndef BANCO_H
#define BANCO_H

int abrirconta(int saldo){
    FILE *f;
    char url[] = "extrato.txt";

    printf("Voce acabou de abrir a conta, o saldo atual é: %i" ,saldo);

    f  = fopen(url,"w");
    fprintf(f,"Voce acabou de abrir a conta, o saldo atual é: %i" ,saldo);
    fclose(f);
    return 0;
}



int depositar(int saldo)
{
    FILE *f;
    char url[] = "extrato.txt";
    int deposito = 0;

    printf("\nDigite o quanto deseja depositar\n");
    scanf("%i", &deposito);

    saldo = saldo + deposito;
    printf("\nDeposito recebido no valor de R$%i" ,deposito);

    f  = fopen(url,"w");
    fprintf(f,"\nDeposito recebido no valor de R$%i\nSeu saldo atual é: %i" ,deposito, saldo);
    fclose(f);

    return saldo;
}

int sacar(int saldo)
{
    FILE *f;
    char url[] = "extrato.txt";
    int saque;
    printf("\nDigite o quanto deseja sacar\n");
    scanf("%i", &saque);

    if(saldo < saque)
    {
        printf("\nVoce nao pode sacar");
    }

        saldo -=saque;
        printf("\nSaque feito no valor de R$%i" ,saque);
        f  = fopen(url,"w");
        fprintf(f,"\nSaque feito no valor de R$%i\nSaldo atual: %i ",saque, saldo);
        fclose(f);
        return saldo;
}


 int versaldo(int saldo)
 {
    printf("Seu saldo atual é: %d\n", saldo);
    return saldo;
 }


#endif

