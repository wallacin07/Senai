#include <stdio.h>
#include <windows.h>

int main(){
    int resultado = 0;
    int num1 = 0;
    printf("Digite um numero para sempre somar: ");
    scanf("%d", &num1);
    if (num1 > 0) {
    for(int i = 0; i <= num1; i++)
    {
        resultado = resultado + i;
    }
}
else
{
    printf("Numero não natural!!");
}
 printf("Resultado: %d", resultado);
}
