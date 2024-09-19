# #include<stdio.h>
# #include<stdlib.h>
# #include<locale.h>

# int main(){
# 	setlocale(LC_ALL,"Portuguese");
	
# 	int vetmatricula[5], cont = 0, busca = 0;
	
	
# 	for(cont=0; cont<5; cont++){
# 		printf("DIGITE O N�MERO PARA CADASTRO DE MATR�CULA:");
# 		scanf("%d",&vetmatricula[cont]);
	
# 	}
# //  printf("MATR�CULA:%d CADASTRADA\n", vetmatricula[0]);
# //	printf("MATR�CULA:%d CADASTRADA\n", vetmatricula[1]);
# //	printf("MATR�CULA:%d CADASTRADA\n", vetmatricula[2]);
# //	printf("MATR�CULA:%d CADASTRADA\n", vetmatricula[3]);
# //	printf("MATR�CULA:%d CADASTRADA\n\n", vetmatricula[4]);
	
# 	printf("Informe a matr�cula para consulta:");
# 	scanf("%d", &busca);
	
# 	for(cont=0; cont<5; cont++){
		
# 		if(busca == vetmatricula[cont]){
# 			break;
# 		}
# 	}
# 	if(cont == 5){
# 		printf("\n Matricula n�o encontrada \n");
# 	}
# 	else{
# 		printf("Encontrado \n");
# 	}
		
# 	system("pause");
# 	return 0;
# }

matriculas = []
cont = 0 
busca = 0
numeroDeMatriculas = 0
while numeroDeMatriculas < 5:
    matricula = int(input("Digite o numero para cadastro matricula\n-- "))
    matriculas.append(matricula)
    numeroDeMatriculas += 1

for i in matriculas:
    i -=1
    print(f"MATRICULA CADASTRADA \n {matriculas[i]}\n")
    
pesquisa = int(input("Digite uma matricula para pesquisa\n-- "))

for i in matriculas:
    if pesquisa == matriculas[i-1]:
        print("\nMatricula encontrada")
        break
    else:
        if i == 5:
            print("\nNão encontrada")

