#include <stdio.h>
#include <windows.h>

int main(){
    int num1 = 0;
    printf("Digite um numero para mostrar a tabuada: ");
    scanf("%d", &num1);
    printf("     TABUADA DO %d    \n", num1);
    for(int i = 1; i<=10; i++)
    {
        int multi = num1 * i;
        printf("%d x %d = %d\n", num1, i, multi);
    }


}
