#include <stdio.h>
#include <windows.h>

int main(){
 int num = 100, i, resultado = 0,j;
//  printf("Digite um número para saber se eh primo: ");
//  scanf("%d", &num);
 for (i=1;i<=num;i++){
   resultado = 0;
   for (j = 2; j <= i / 2; j++) {
    if (i % j == 0) {
       resultado++;
       break;
    }
   }
   if (resultado == 0 ){
      printf("%d\n", i);
   }
 }
 return 0;
}