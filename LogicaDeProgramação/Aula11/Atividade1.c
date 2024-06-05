#include<stdio.h>


int main(){

    //Declaração das variaveis
    char operador;
    float num1, num2;

    //Declaração dos valores da variaveis com Input(scanf)
    printf("Digite um operador (+, -, *, /): ");
    scanf("%c",&operador);
    printf("Digite dois números: ");
    scanf("%f %f",&num1,&num2);

    //Operações através do valor da variavel operador
    switch(operador){
        case '+':
        printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
        break;

        case '-':
        printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
        break;

        case '*':
        printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
        break;

        case '/':
        //Erro de divisão por 0
        if(num2!=0)
                printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
            else{
                printf("Erro! Divisão por zero!");
            break;
		}
        default:
            printf("Erro! Operador inválido!");
    }
    return 0;
}