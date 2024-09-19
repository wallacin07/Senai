# #include<stdio.h>
# #include<stdlib.h>
# #include<locale.h>
# int main(){
# 	setlocale(LC_ALL,"Portuguese");
	
# 	float sal, total, media;
# 	int cont;
	
# 	for(cont = 1; cont<=5; cont++){
# 		printf("Informe o salario do funcionario %d:",cont);
# 		scanf("%f", &sal);
# 		total = total + sal;
# 	}
# 	printf("Total: %.2f \n",total);
# 	media = total / (cont-1);
# 	printf("Media: %.2f \n",media);
	
# 	system("pause");
# 	return 0;
# }

sal = 0
total = 0
media = 0

i= 0
for i in range(5):
    sal = int(input("Informe o Salario\n-- "))
    total = total + sal
    
print(f"Total: {total}")   
media = total/5
print(f"Media: {media}")