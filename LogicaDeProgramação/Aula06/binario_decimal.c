#include <stdio.h>

int main()
{
    int n = 0;
    printf("Fale um numero para saber seu binario: ");
    scanf("%i", &n);
    conversor(n);
}

int conversor(int n)
{


    if(n == 1){
        printf("1");
        return 0;
    }
    int mod = n%2;
    conversor(n/2);
    printf("%i", mod);
    return 0;

}