#include <stdio.h>
#include <ctype.h>
int main()
{
    int n = 0;
    printf("Fale um numero para somar ate ele: ");
    scanf("%i", &n);
    printf("%i", somatorio(n));
}

int somatorio(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + somatorio(n-1);
    }
}