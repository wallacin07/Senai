#include<stdio.h>

int main()
{
    //Declaração das variaveis
    int num,i;
    unsigned long long fatorial=1;

    //Declaração dos valores da variaveis com Input(scanf)
    printf("Digite um número inteiro positivo: ");
    scanf("%d",&num);

    //Erro caso num seja menor que 0
    if(num<0)
    {
        printf("Erro! Fatorial de número negativo não existe.");
    }

    //Operação do fatorial
    else
    {
        for(i=1;i<=num;++i)
            {
                fatorial*=i;
            }

        //Print do resultado
        printf("Fatorial de %d = %llu",num,fatorial);
    }
    
    return 0;
}