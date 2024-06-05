#include <stdio.h>
#include <windows.h>

int main(){

int num1;
printf("Digite um numero para falar todos os pares: ");
scanf("%d", &num1);
for(int i = 0; i <= num1; i++)
{
    if (i%2 == 0) {
        printf("%d\n", i);
    }
}

}