#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef struct
{
    char nome[15];
    char endereco[40];
    char telefone[15];

}Funcionario;



int main()
{
    Funcionario funcionario[5];


    for (int i = 0; i < 5; i++)
    {
         printf("\nDigite o nome do funcionario %i: ", i+1);
        scanf("%s", funcionario[i].nome);

        printf("\nDigite a endereço do funcionario %i: ", i+1);
        scanf("%s", funcionario[i].endereco);

        printf("\nDigite o telefone do funcionario %i: ", i+1);
        scanf("%s", funcionario[i].telefone);


    }




    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (funcionario[i].nome[0]>funcionario[j].nome[0])
            {
                Funcionario aux = funcionario[j];
                funcionario[j] = funcionario[i];
                funcionario[i]= aux;
            //    ordemAlfabetica[i] = funcionario[j];
            }
        }
        
    
    }
for (int i = 0; i < 5; i++)
{
    
                printf("\nNome: %s", funcionario[i].nome);

                printf("\nEndereço: %s", funcionario[i].endereco);

                printf("\nTelefone: %s", funcionario[i].telefone);
}


}