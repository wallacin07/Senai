# #include<stdio.h>
# #include<stdlib.h>
# #include<locale.h>

# int main(){
# 	setlocale(LC_ALL,"Portuguese");
	
# 	int num[50],cont=0,soma=0;
	
# 	for(cont=0; cont<50; cont++){
# 		printf("Informe o %d� n�mero:",cont+1);
# 		fflush(stdin);
# 		scanf("%d",&num[cont]);
# 		soma = soma + num[cont];
# 	}
# 	printf("A soma dos n�meros: %d\n",soma);



	
# 	system("pause");
# 	return 0;
# }


num = []
soma = 0
for i in range(10):
    numero = int(input("Informe um numero"))
    num.append(numero)
    soma = soma + num[i]
    
print(f"A soma é {soma}")