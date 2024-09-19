# #include<stdio.h>
# #include<stdlib.h>
# #include<locale.h>
# int main(){
# 	setlocale(LC_ALL,"Portuguese");
	
# 	int id;
# 	float n1,n2,n3,media;
# 	char conceito;
	
# 	printf("QUAL NUMERO DA IDENTIFICA��O DO ALUNO:");
# 	fflush(stdin);
# 	scanf("%d", &id);
# 	printf("QUAL A PRIMEIRA NOTA:");
# 	fflush(stdin);
# 	scanf("%f", &n1);
# 	printf("QUAL A SEGUNDA NOTA:");
# 	fflush(stdin);
# 	scanf("%f", &n2);
# 	printf("QUAL A TERCEIRA NOTA:");
# 	fflush(stdin);
# 	scanf("%f", &n3);
	
# 	media = (n1+n2+n3 )/ 3;
# 	printf("\n");
# 	if (media >= 90){
# 		conceito = 'A';
# 		printf("APROVADO conceito:%c \n COM O ID:%d \n COM AS NOTAS: %.2f %.2f %.2f \n COM A MEDIA: %.2f \n",conceito,id,n1,n2,n3,media);
# 	}
# 	else {
# 		if (media >=75){
# 		conceito = 'B';
# 			printf("APROVADO \n COM O ID:%d \n COM AS NOTAS: %.2f %.2f %.2f \n COM A MEDIA: %.2f \n",id,n1,n2,n3,media);
# 		}
# 		else{
# 			if(media >=60){
# 				conceito = 'C';
# 					printf("APROVADO \n COM O ID:%d \n COM AS NOTAS: %.2f %.2f %.2f \n COM A MEDIA: %.2f \n",id,n1,n2,n3,media);
# 			}
# 			else{
# 				if(media>=40){
# 					conceito = 'D';
# 						printf("REPROVADO \n COM O ID:%d \n COM AS NOTAS: %.2f %.2f %.2f \n COM A MEDIA: %.2f \n",id,n1,n2,n3,media);
# 				}
# 				else{
# 					conceito = 'E';
# 						printf("REPROVADO \n COM O ID:%d \n COM AS NOTAS: %.2f %.2f %.2f \n COM A MEDIA: %.2f \n",id,n1,n2,n3,media);
# 				}
# 			}
# 		}
# 	}
	
# 	system("pause");
# 	return 0;
# }

# /*if(conceito == 'E'){
# 	printf("REPROVADO \n");
# }
# else{
# 	if(conceito == 'D'){
# 		printf("REPROVADO \n");
# 	}
# 	else{
# 		printf("APROVADO \n");
# 	}	
# }*/
	
id = 0
n1 =0
n2= 0
n3 = 0
conceito = ''

id = int(input("Informe o id do aluno\n-- "))
n1 = int(input("Informe a primeira nota\n-- "))
n2 = int(input("Informe a segunda nota\n-- "))
n3 = int(input("Informe a terceira nota\n-- "))

media = (n1+n2+n3)/3

if media >= 90:
    conceito = 'A'
    print(f"Aluno com o id {id} Aprovado com conceito {conceito} e notas {n1}, {n2}, {n3}")
elif media >= 75:
    conceito = 'B'
    print(f"Aluno com o id {id} Aprovado com conceito {conceito} e notas {n1}, {n2}, {n3}")
elif media >= 60:
    conceito = 'C'
    print(f"Aluno com o id {id} Aprovado com conceito {conceito} e notas {n1}, {n2}, {n3}")
elif media >= 40:
    conceito = 'D'
    print(f"Aluno com o id {id} Aprovado com conceito {conceito} e notas {n1}, {n2}, {n3}")
else:
    conceito = 'E'
    print(f"Aluno com o id {id} Aprovado com conceito {conceito} e notas {n1}, {n2}, {n3}")