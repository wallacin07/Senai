#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[15];
    int idade;
    char sexo ;
    char cpf[18];
    char dataDeNascimento[11];
    int codigoDoSetor;
    char cargo[30];
    int salario;

}Funcionario;



int main()
{
    Funcionario funcionario;



    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o nome do funcionario %i: ", i+1);
        scanf("%s", funcionario.nome);

        printf("\nDigite a idade do funcionario %i: ", i+1);
        scanf("%i", &funcionario.idade);

        printf("\nDigite o sexo do funcionario %i: ", i+1);
        scanf("%c", &funcionario.sexo);

        printf("\nDigite o cpf do funcionario %i: ", i+1);
        scanf("%s", funcionario.cpf);

        printf("\nDigite a data de nascimento %i: ", i+1);
        scanf("%s", funcionario.dataDeNascimento);

        printf("\nDigite o codigo do setor do funcionario %i: ", i+1);
        scanf("%i", &funcionario.codigoDoSetor);
        
        printf("\nDigite o cargo do funcionario %i: ", i+1);
        scanf("%s", funcionario.cargo);

        printf("\nDigite o salario do funcionario %i: ", i+1);
        scanf("%i", &funcionario.salario);









        printf("\nNome: %s", funcionario.nome);

        printf("\nIdade: %i", &funcionario.idade);

        printf("\nSexo: %c", &funcionario.sexo);

        printf("CPF: %s", funcionario.cpf);

        printf("\nData de Nascimento: %s", funcionario.dataDeNascimento);

        printf("\nCodigo do setor: %i", &funcionario.codigoDoSetor);
        
        printf("\nCargo: %s", funcionario.cargo);

        printf("\nSalario: %i", &funcionario.salario);



}
}