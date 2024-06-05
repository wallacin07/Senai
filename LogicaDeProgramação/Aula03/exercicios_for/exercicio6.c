#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    for(i = 0; i <= n; i++){
        for(j = n - i/2; j >= 1; j--) // imprime os espaços
            printf(" ");
        for(j = 1; j <= i; j++) // imprime os *
            printf(" * ");
        printf("\n");
    }

    return 0;
}