# #include<stdio.h>
# #include<stdlib.h>
# #include<locale.h>
# int main(){
# 	setlocale(LC_ALL,"");
	
# 	int i = 0;
# 	loat a = 0, b = 0, c = 0;
	
# 	print("INFORME O VALOR DE a :");	
# 	fflush(stdin);
# 	scanf("%f", &a);
# 	printf("INFORME O VALOR DE b :");	
# 	fflush(stdin);
# 	scanf("%f", &b);
# 	printf("INFORME O VALOR DE c :");	
# 	fflush(stdin);
# 	scanf("%f", &c);
# 	printf("DIGITE O VALOR DE i :");	
# 	fflush(stdin);
# 	scanf("%d", &i);
# 	printf("__________________________________\n\n");	
	
# 		while(i > 0){
# 	if (i == 1){ //CRESCENTE
# 		if (a < b and a < c && b < c){
# 			printf("a = %.2f \n", a);
# 			printf("b = %.2f \n", b);
# 			printf("c = %.2f \n\n", c);
# 		}
# 		else {
# 			if (a < b && a < c && c < b){
# 				printf("a = %.2f \n", a);
# 				printf("c = %.2f \n", c);
# 				printf("d = %.2f \n\n", b);	
# 			}
# 			else {
# 				if (b < a && b < c && a < c){
# 					printf("b = %.2f \n", b);
# 					printf("a = %.2f \n", a);
# 					printf("c = %.2f \n\n", c);
# 				}
# 				else { 
# 					if (b < a && b < c && c < a){
# 						printf("b = %.2f \n", b);
# 						printf("c =%.2f \n", c);
# 						printf("a = %.2f \n\n", a);
# 					}
# 					else {
# 						if (c < a && c < b && a < b){
# 							printf("c = %.2f \n", c);
# 							printf("a = %.2f \n", a);
# 							printf("b = %.2f \n\n", b);
# 						}
# 						else {
# 							if (c < a && c < b && b < a){
# 								printf("c = %.2f \n", c);
# 								printf("b = %.2f \n", b);
# 								printf("a = %.2f \n\n", a);	
# 							}
# 						}
# 					}
# 				}
# 			}
# 		}	
# 	}
# 	else 
# 		if(i == 2){ //DECRESCENTE
# 			if (a > b && a > c && b > c){
# 				printf("a = %.2f \n", a);
# 				printf("b = %.2f \n", b);
# 				printf("c = %.2f \n\n", c);
# 			}
# 			else {
# 				if (a > b && a > c && c > b){
# 					printf("a = %.2f \n", a);
# 					printf("c = %.2f \n", c);
# 					printf("d = %.2f \n\n", b);	
# 				}
			
# 				else {
# 					if (b > a && b > c && a >c){
# 						printf("b = %.2f \n", b);
# 						printf("a = %.2f \n", a);
# 						printf("c = %.2f \n\n", c);
# 					}
# 					else { 
# 						if (b > a && b > c && c > a){
# 							printf("b = %.2f \n", b);
# 							printf("c = %.2f \n", c);
# 							printf("a = %.2f \n\n", a);
# 						}
					
				
# 						else {
# 							if (c > a && c > b && a > b){
# 								printf("c = %.2f \n", c);
# 								printf("a = %.2f \n", a);
# 								printf("b = %.2f \n\n", b);
# 							}
# 							else {
# 								if (c > a && c > b && b > a){
# 									printf("c = %.2f \n", c);
# 									printf("b = %.2f \n", b);
# 									printf("a = %.2f \n\n", a);	
# 								}
# 							}
# 						}
# 					}
# 				}
# 			}
# 		}	
# 	printf("__________________________________\n\n");
# 	printf("digite 1 ou 2 ou 3 para i, ou 0 para sair.\n\n");
# 	printf("DIGITE O VALOR DE i :\n");	
# 	fflush(stdin);
# 	scanf("%d", &i);
# 	printf("\n");	
# }
# 	system ("pause");
# 	return 0;
# }
matriz = []
numero1 = int(input("Qual o primeiro numero?\n-- "))
matriz.append(numero1)
numero2 = int(input("Qual o primeiro numero?\n-- "))
matriz.append(numero2)
numero3 = int(input("Qual o primeiro numero?\n-- "))
matriz.append(numero3)
ordem = int(input("Qual a ordem?\n-- "))
print(matriz)
    # Traverse through all array elements  
    
if ordem == 1:
    for i in range(3):  
            for j in range(0, 3-i-1): 
                if matriz[j] > matriz[j+1]:  
                    matriz[j], matriz[j+1] = matriz[j+1], matriz[j]
elif ordem == 2:
        for i in range(3):    
            for j in range(0, 3-i-1):   
                if matriz[j] < matriz[j+1]:  
                    matriz[j], matriz[j+1] = matriz[j+1], matriz[j]
    																
print(matriz)