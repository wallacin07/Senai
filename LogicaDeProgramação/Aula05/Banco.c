#include <stdio.h>
#include "banco.h"
int main()
{   
    int saldo = 0;
    int conta = 0;
    printf("Deseja abrir uma conta\n1 - sim\n2 - nao\n--");
    scanf("%i", &conta);
    if (conta == 1)
    {
        abrirconta(saldo);
        while (1)
        {
            int opcao = 0, sair = 0;
            printf("o que deseja fazer\n1 - deposito\n2 - saque\n3 - ver saldo\n--");
            scanf("%i", &opcao);
            switch (opcao)
            {
            case 1 :
                saldo +=depositar(saldo);
                break;
            case 2 :
                saldo = sacar(saldo);
                break;
            case 3 :
                versaldo(saldo);
                break;
            default:
            printf("nao existe essa opcao");
                break;
            }
            printf("\nDeseja sair?\n 1 - sair\nAperte qualquer numero se quiser continuar\n--");
            scanf("%i", &sair);
            if (sair == 1)
            {
                break;
            }
            
        }
        
    }
    
    
}

