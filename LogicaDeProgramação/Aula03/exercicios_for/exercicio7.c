#include <stdio.h>
#include <stdlib.h>

int main() {
    long  i, n;
    printf("Digite o valor de n: ");
    scanf("%ld", &n);
    for (i = 1; n /=10; i++)
    {
    }
    printf("%ld", i);
    return 0;
}