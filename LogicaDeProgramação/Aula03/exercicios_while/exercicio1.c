#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL));
int a = (rand() % 1000), palpite, tentativas = 0;
printf("Voce tem 5 tentaivas\n");
while(palpite != a)
{
    printf("Digite seu palpite: ");
    scanf("%i", &palpite);
    tentativas++;
    if (tentativas == 5)
    {
        printf("\nAcabou as tentativas");
        printf("\nO numero era: %i",a);
        break;
    }
}
if(palpite == a)
{
printf("Voce acertou!!!!!!!!");
}





}