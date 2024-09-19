# #include<stdio.h>
# #include<stdlib.h>
# #include<locale.h>
# int main(){
# 	setlocale(LC_ALL,"Portuguese");
	
# 	char letra;
	
# 	printf("Informe a letra:");
# 	fflush(stdin);
# 	scanf("%c", &letra);
	
# 	if(letra == 'A' or letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ){
# 		printf("� vogal. \n");
# 	}
# 	else{
# 		printf("� consoante. \n");
# 	}
	
# 	system("pause");
# 	return 0;
# }

letra = str(input("Digite uma letra\n-- ")).upper()

if letra == 'A' or letra == 'E' or letra == 'I' or letra == 'O' or letra == 'U':
    print("é vogal")
else:
    print("é Consoante")