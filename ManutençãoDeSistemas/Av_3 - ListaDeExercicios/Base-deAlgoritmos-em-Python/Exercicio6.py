# #include<stdio.h>
# #include<stdlib.h>
# #include<locale.h>

# int main(){
# 	setlocale(LC_ALL,"Portuguese");
	
# 	int num_pessoas;
# 	char sexo;
# 	float alt,resp;
	
# 	printf("Qual a altura da pessoa? \n");
# 	fflush(stdin);
# 	scanf("%f",&alt);
	
# 	while(alt > 0){
		
# 	printf("Qual o sexo da pessoa?(M)Homens/(F)Mulheres \n");
# 	fflush(stdin);
# 	scanf("%c",&sexo);
	
# 		num_pessoas = num_pessoas + 1;
		
# 		if(sexo =='M'){
# 			resp =(72.7*alt)-58;
# 		}
# 		else{
# 			resp =(62.1*alt)-44.7;
# 		}
		
# 	printf(" Seu peso ideal � de: %.2f kilos \n\n\n",resp);
	
# 	printf("Qual a altura da pessoa? \n");
# 	fflush(stdin);
# 	scanf("%f",&alt);
		
# 	}
	
# 	printf(" %d participantes. \n \n",num_pessoas);
	
# 	system("pause");
# 	return 0;
# }



def PesoIdeal():
    altura = float(input("Qual a altura da pessoa?\n-- "))
    while(altura > 0):
        sexo = str(input("\n\nQual o sexo da pessoa?(M)Homens/(F)Mulheres\n-- "))
        if sexo == 'M':
             resp = (72.7*altura)-58
        else:
            resp = (62.1*altura)-44.7
        print(f"Seu peso ideal é {resp}")
        break
        
PesoIdeal()