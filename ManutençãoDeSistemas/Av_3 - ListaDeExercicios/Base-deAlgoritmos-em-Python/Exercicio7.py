# #include <stdio.h>
# #include <stdlib.h>
# #include <locale.h>

# int FAT(int x);

# int main (){
# 	 setlocale(LC_ALL,"Portuguese");
	 
# 	 int num, fatorial;
	 
# 	 scanf("%d", &num);
# 	 fatorial = FAT(num);
	 
# 	 printf("\n O fatorial de %d é: %d\n\n\n", num, fatorial);
	 
# 	 system("pause");
# 	 return 0;
# }

# int FAT (int p_num){
	
# 	if(p_num == 0){
		
# 		return 1;
# 	}
# 	else{
# 		printf("%d é um dos números.\n",p_num);
# 		return p_num * FAT(p_num - 1);
# 	}
# }

def fatorial(num):
    if(num == 0):
        return 1
    else:
        return num * fatorial(num-1)
    
numero = int(input("Qual o numero?\n-- "))
print(f"o Fatorial de {numero} é: {fatorial(numero)}")
