#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 256

typedef struct
{
    char nome[15];
    char sobrenome[25];
    int idade;

}proprietario;

typedef struct{

    char marca[15];
    int ano;
    char cor[12];
    char placa[8];
    char modelo[20];
    proprietario Proprietario;

}veiculos;



void ver_alunos()
{
    FILE *f;
    char url[14] = "veiculos.txt";
    f = fopen(url, "r");
    char buffer[MAX_LENGTH];

        while (fgets(buffer, MAX_LENGTH, f))
            printf("%s", buffer);
}

int main(){
    
    FILE *f;
    char url[14] = "veiculos.txt";
    int dataDeNascimento;
    veiculos Veiculo;
    int escolha;
    while (1)
    {
    printf("\n\nBem vindo ao sistema de cadastro de veiculos\n");
    printf("Voce deseja:\n[1] adicionar carros\n[2] visualizar carros cadastrados\n--");
    scanf("%i", &escolha);

    switch (escolha)
    {
    case 1:
        printf("\nDigite a marca do carro: ");
        scanf("%s", Veiculo.marca);
        printf("\nDigite o ano do carro: ");
        scanf("%i", &Veiculo.ano);
        printf("\nDigite a cor do carro: ");
        scanf("%s", Veiculo.cor);
        printf("\nDigite a placa do carro: ");
        scanf("%s", Veiculo.placa);
        printf("\nDigite o modelo do carro: ");
        scanf("%s", Veiculo.modelo);
        printf("\nDigite o primeiro nome do proprietario do carro: ");
        scanf("%s", Veiculo.Proprietario.nome);
        printf("\nDigite o sobrenome do proprietario do carro: ");
        scanf("%s", Veiculo.Proprietario.sobrenome);
        printf("\nDigite o ano de nascimento do proprietario do carro do carro: ");
        scanf("%i", &dataDeNascimento);
        Veiculo.Proprietario.idade = 2024 -  dataDeNascimento;
        f  = fopen(url,"a");
        fprintf(f,"\n\nMarca do veiculo: %s\nAno do veiculo: %i\nCor do veiculo: %s\nPlaca do veiculo: %s\nModelo do veiculo: %s\nNome do proprietario: %s\nSobrenome do proprietario: %s\nIdade do proprietario: %i\n",Veiculo.marca,Veiculo.ano, Veiculo.cor, Veiculo.placa,Veiculo.modelo,Veiculo.Proprietario.nome,Veiculo.Proprietario.sobrenome,Veiculo.Proprietario.idade);
        fclose(f);
        
        break;
    case 2: 
        ver_alunos();
        break;
    default:
        break;
    }
    
    }




}
