# #include<stdio.h>
# #include<stdlib.h>
# #include<locale.h>

# int main(){
# 	setlocale(LC_ALL,"Portuguese");
	
# 	int	mat1[3][3];
# 	int	mat2[3][3];
# 	int	matsoma[3][3];
# 	int l,c;
	
# 	printf("PRIMEIRA MATRIZ\n");
# 	for(l = 0; l < 3; l++){
# 		for(c = 0; c < 3; c++){
# 			printf("informe a posição da linha %d, e da coluna %d da matriz.\n", l,c);
# 			scanf("%d", &mat1[l][c]);
# 		}
# 	}
	
	
# 	printf("SEGUNDA MATRIZ\n");
# 	for(l = 0; l < 3; l++){
# 		for(c = 0; c < 3; c++){
# 			printf("informe a posição da linha %d, e da coluna %d da matriz.\n", l,c);
# 			scanf("%d", &mat2[l][c]);
# 		}
# 	}
	
	
# 	for(l = 0; l < 3; l++){
# 		for(c = 0; c < 3; c++){
# 		matsoma[l][c] = mat1[l][c] + mat2[l][c];
# 		}
# 	}
	
# 	printf("SOMA DAS 2 MATRIZES\n");
# 	for(l = 0; l < 3; l++){
# 		for(c = 0; c < 3; c++){
# 		printf("| %d |",matsoma[l][c]);
# 		}
# 		printf("\n");
# 	}
	
# system("pause");
# return 0;	
# }

linhas = 3
colunas = 5
matriz1 = []
matriz2 = []
matrizsoma = []
cont = 0
for i in range(3):
    linha = []
    for j in range(3):
        cont += 1
        linha.append(cont)
    matriz1.append(linha)
    matriz2.append(linha)
    
for i in range(3):
    linha = []
    for j in range(3):
        soma = matriz1[i][j] + matriz2[i][j] 
        linha.append(soma)
    matrizsoma.append(linha)
    
print(matrizsoma)
