#include <stdio.h>
#include <windows.h>

int main(){
 int n = 0,num = 0,som = 0, media = 0;
 printf("Digite o tanto de numeros que deseja somar para obter a media: ");
 scanf("%i", &n);
   for(int i=1;i<=n;i++){
      printf("Escreva o valor %i: ",i);
      scanf("%i", &num);
      som += num;
      printf("%i", som);
   }
 media = som / n;
 printf("a media dos numeros eh %i", media);
 return 0;
}