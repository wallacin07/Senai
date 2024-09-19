# #include<stdio.h>
# #include<stdlib.h>
# #include<locale.h>

# #define DIML 3
# #define DIMC 5

# int main(){
# 	setlocale(LC_ALL,"Portuguese");
	
# 	int l, c;
# 	int matriz[DIML][DIMC];
	
# 	for(l = 0; l < DIML; l++){
# 		for(c = 0; c < DIMC; c++){
# 			printf("Informe a posi��o %d, %d da matriz", l,c);
# 			scanf("%d", &matriz[l][c]);
# 		}
# 	}
	
# 	for(l = 0; l < DIML; l++){
# 		for(c = 0; c < DIMC; c++){
# 			printf("%4d", matriz[l][c]);
# 		}
# 		printf("\n");	
# 	}
# 	system("pause");
# 	return 0;
# }

linhas = 3
colunas = 5
matriz = []
cont = 0
for i in range(3):
    linha = []
    for j in range(5):
        numero = int(input(f"Digite o numero que vai na posição {i} {j}\n-- "))
        linha.append(numero)
    matriz.append(linha)
print(matriz)
