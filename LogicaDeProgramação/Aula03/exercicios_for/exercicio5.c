#include <stdio.h>
#include <windows.h>

int main(){
 int num, i,j;
 printf("Digite um número para saber seus multiplos: ");
 scanf("%d", &num);
 printf("Multiplos de %i\n", num);
 for (i=1;i<=100;i++){
   j = 0;
   j = num * i;
    printf("%i\n", j);

 }
 return 0;
}