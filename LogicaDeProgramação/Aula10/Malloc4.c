#include <stdio.h>
#include <stdlib.h>
int numero_elementos;

int string()
{
    printf("Diga quantas letras deseja escrever\n--");
    scanf("%i", &numero_elementos);
    char *array = malloc(numero_elementos*sizeof(char));

        printf("Digite a palavra que quer escrever\n--");
        scanf("%s", array);

    printf("\nescrita: ");
        printf("%s ",array);
    
    free(array);
    
    return 0;
}
int main()
{
    string();
}