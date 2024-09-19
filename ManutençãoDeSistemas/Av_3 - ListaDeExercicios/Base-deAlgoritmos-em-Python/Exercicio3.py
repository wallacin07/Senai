# #include <stdio.h>
# #include <stdlib.h>
# #include<locale.h>

# int mns(int meudeus, int jesus);

# int main() {
#    		 setlocale(LC_ALL,"Portuguese");
    
#     int n1 = 0, nx_n1 = 0, resp;
    
#     printf("Informe o primeiro número:\n ");
#     fflush(stdin);
#     scanf("%d", &n1);
#     printf("Informe o números de vezes que o 1º número será somado:\n ");
#     fflush(stdin);
#     scanf("%d", &nx_n1);
    
#     resp = mns(n1, nx_n1);
    
#     printf("\nRESPOSTA: %d\n\n", resp);
    
#     return (0);
#     system("pause");
# }

# int mns(int senhordagloria, int oq_esta_contecendo){
    
#     if(oq_esta_contecendo == 1){
#         return senhordagloria;
#     } else {
#         return senhordagloria + mns(senhordagloria, oq_esta_contecendo-1);
#     } 
# }

def resposta():
    n1 = 0
    nx1 = 0
    printzin = 0
    n1 = int(input("Informe o primeiro número\n-- "))
    nx1 = int(input("Informe o números de vezes que o 1º número será somado:\n-- "))
    printzin = recursividadeDeDeus(n1,nx1)
    print(printzin)
    
def recursividadeDeDeus(numero,vezesNumero):
    if vezesNumero == 1:
        return numero
    else:
        return numero + recursividadeDeDeus(numero,vezesNumero-1) 
    
resposta()
    
    