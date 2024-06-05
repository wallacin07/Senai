#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char rua[35];
    char bairro[15];
    char cep[9];
    char pais[15];
    char estado[15];
    char complemento[15];
    char cidade[20];
    
}Endereco;

typedef struct
{
    char dia[5];
    char mes[115];
    char ano[6];
    
}Nascimento;

typedef struct
{
    char ddd[5];
    char numero[10];
}Telefone;

typedef struct
{
    char nome[15];
    char email[40];
    Endereco endereco;
    Telefone telefone;
    Nascimento nascimento;
    char obs[50];

}Agenda;
Agenda *agenda;
int numContato = 0;

void criarAgenda(){
    agenda = (Agenda*) malloc(sizeof(Agenda));
    printf("\nAdicione um contato a agenda\n\n");
    numContato++;
    // Adicionando os atributos a instancia no vetor
    printf("Qual o nome que voce quer adicionar ao novo contato: ");
    scanf("%s", agenda->nome);
    printf("\n");

    printf("Email: ");
    scanf("%s", agenda->email);
    printf("\n");

    printf("Rua: ");
    scanf("%s", agenda->endereco.rua);
    printf("\n");

    printf("Bairro: ");
    scanf("%s", agenda->endereco.bairro);
    printf("\n");

    printf("Cidade: ");
    scanf("%s", agenda->endereco.cidade);
    printf("\n");

    printf("Estado: ");
    scanf("%s", agenda->endereco.estado);
    printf("\n");

    printf("Pais: ");
    scanf("%s", agenda->endereco.pais);
    printf("\n");

    printf("Complemento: ");
    scanf("%s", agenda->endereco.complemento);
    printf("\n");

    printf("CEP: ");
    scanf("%s", agenda->endereco.cep);
    printf("\n");

    printf("Telefone DDD: ");
    scanf("%s", agenda->telefone.ddd);
    printf("\n");

    printf("Numero: ");
    scanf("%s", agenda->telefone.numero);
    printf("\n");

    printf("Dia de nascimento: ");
    scanf("%s", agenda->nascimento.dia);
    printf("\n");

    printf("Mes: ");
    scanf("%s", agenda->nascimento.mes);
    printf("\n");

    printf("Ano: ");
    scanf("%s", agenda->nascimento.ano);
    printf("\n");

    printf("Escreva alguma observacao sobre o contato: ");
    scanf("%s", agenda->obs);
}

void adicionarNovoContato()
{
    if (numContato == 2)
    {
        numContato +=1;
        agenda = (Agenda*) realloc(agenda, numContato * sizeof(agenda));
    }
    
    numContato +=1;
    agenda = (Agenda*) realloc(agenda, numContato * sizeof(agenda));
    printf("\n");
    printf("Qual o nome que voce quer adicionar ao novo contato: ");
    scanf("%s", agenda[numContato-1].nome);
    printf("\n");

    printf("Email: ");
    scanf("%s", agenda[numContato-1].email);
    printf("\n");

    printf("Rua: ");
    scanf("%s", agenda[numContato-1].endereco.rua);
    printf("\n");

    printf("Bairro: ");
    scanf("%s", agenda[numContato-1].endereco.bairro);
    printf("\n");

    printf("Cidade: ");
    scanf("%s", agenda[numContato-1].endereco.cidade);
    printf("\n");

    printf("Estado: ");
    scanf("%s", agenda[numContato-1].endereco.estado);
    printf("\n");

    printf("Pais: ");
    scanf("%s", agenda[numContato-1].endereco.pais);
    printf("\n");

    printf("Complemento: ");
    scanf("%s", agenda[numContato-1].endereco.complemento);
    printf("\n");

    printf("CEP: ");
    scanf("%s", agenda[numContato-1].endereco.cep);
    printf("\n");

    printf("Telefone DDD: ");
    scanf("%s", agenda[numContato-1].telefone.ddd);
    printf("\n");

    printf("Numero: ");
    scanf("%s", agenda[numContato-1].telefone.numero);
    printf("\n");

    printf("Dia de nascimento: ");
    scanf("%s", agenda[numContato-1].nascimento.dia);
    printf("\n");

    printf("Mes: ");
    scanf("%s", agenda[numContato-1].nascimento.mes);
    printf("\n");

    printf("Ano: ");
    scanf("%s", agenda[numContato-1].nascimento.ano);
    printf("\n");

    printf("Escreva alguma observacao sobre o contato: ");
    scanf("%s", agenda[numContato-1].obs);
}

void buscarNome(char nome[25])
{
    for (int i = 0; i < numContato; i++)
    {
        if (strcmp(agenda[i].nome, nome) == 0)
        {

            printf("\n\n");
            printf("CONTATO %i\n\n", i+1);
        
            printf("Nome do contato: ");
            printf("%s", agenda[i].nome);
            printf("\n");

            printf("Email: ");
            printf("%s", agenda[i].email);
            printf("\n");

            printf("Rua: ");
            printf("%s", agenda[i].endereco.rua);
            printf("\n");

            printf("Bairro: ");
            printf("%s", agenda[i].endereco.bairro);
            printf("\n");

            printf("Cidade: ");
            printf("%s", agenda[i].endereco.cidade);
            printf("\n");

            printf("Estado: ");
            printf("%s", agenda[i].endereco.estado);
            printf("\n");

            printf("Pais: ");
            printf("%s", agenda[i].endereco.pais);
            printf("\n");

            printf("Complemento: ");
            printf("%s", agenda[i].endereco.complemento);
            printf("\n");

            printf("CEP: ");
            printf("%s", agenda[i].endereco.cep);
            printf("\n");

            printf("Telefone DDD: ");
            printf("%s", agenda[i].telefone.ddd);
            printf("\n");

            printf("Numero: ");
            printf("%s", agenda[i].telefone.numero);
            printf("\n");

            printf("Dia de nascimento: ");
            printf("%s", agenda[i].nascimento.dia);
            printf("\n");

            printf("Mes: ");
            printf("%s", agenda[i].nascimento.mes);
            printf("\n");

            printf("Ano: ");
            printf("%s", agenda[i].nascimento.ano);
            printf("\n");

            printf("Observacao: ");
            printf("%s", agenda[i].obs);
        }
    }
}

void buscarMes(char mes[10])
{
    for (int i = 0; i < numContato; i++)
    {
        if (strcmp(agenda[i].nascimento.mes, mes) == 0)
        {

            printf("\n\n");
            printf("CONTATO %i\n\n", i+1);
        
            printf("Nome do contato: ");
            printf("%s", agenda[i].nome);
            printf("\n");

            printf("Email: ");
            printf("%s", agenda[i].email);
            printf("\n");

            printf("Rua: ");
            printf("%s", agenda[i].endereco.rua);
            printf("\n");

            printf("Bairro: ");
            printf("%s", agenda[i].endereco.bairro);
            printf("\n");

            printf("Cidade: ");
            printf("%s", agenda[i].endereco.cidade);
            printf("\n");

            printf("Estado: ");
            printf("%s", agenda[i].endereco.estado);
            printf("\n");

            printf("Pais: ");
            printf("%s", agenda[i].endereco.pais);
            printf("\n");

            printf("Complemento: ");
            printf("%s", agenda[i].endereco.complemento);
            printf("\n");

            printf("CEP: ");
            printf("%s", agenda[i].endereco.cep);
            printf("\n");

            printf("Telefone DDD: ");
            printf("%s", agenda[i].telefone.ddd);
            printf("\n");

            printf("Numero: ");
            printf("%s", agenda[i].telefone.numero);
            printf("\n");

            printf("Dia de nascimento: ");
            printf("%s", agenda[i].nascimento.dia);
            printf("\n");

            printf("Mes: ");
            printf("%s", agenda[i].nascimento.mes);
            printf("\n");

            printf("Ano: ");
            printf("%s", agenda[i].nascimento.ano);
            printf("\n");

            printf("Observacao: ");
            printf("%s", agenda[i].obs);
        }
    }
}

void buscarDiaeMes(char mes[10], char dia[2])
{
    for (int i = 0; i < numContato; i++)
    {
        if (strcmp(agenda[i].nascimento.mes, mes) == 0)
        {
            if (strcmp(agenda[i].nascimento.dia, dia) == 0)
            {
            
            printf("\n\n");
            printf("CONTATO %i\n\n", i+1);
        
            printf("Nome do contato: ");
            printf("%s", agenda[i].nome);
            printf("\n");

            printf("Email: ");
            printf("%s", agenda[i].email);
            printf("\n");

            printf("Rua: ");
            printf("%s", agenda[i].endereco.rua);
            printf("\n");

            printf("Bairro: ");
            printf("%s", agenda[i].endereco.bairro);
            printf("\n");

            printf("Cidade: ");
            printf("%s", agenda[i].endereco.cidade);
            printf("\n");

            printf("Estado: ");
            printf("%s", agenda[i].endereco.estado);
            printf("\n");

            printf("Pais: ");
            printf("%s", agenda[i].endereco.pais);
            printf("\n");

            printf("Complemento: ");
            printf("%s", agenda[i].endereco.complemento);
            printf("\n");

            printf("CEP: ");
            printf("%s", agenda[i].endereco.cep);
            printf("\n");

            printf("Telefone DDD: ");
            printf("%s", agenda[i].telefone.ddd);
            printf("\n");

            printf("Numero: ");
            printf("%s", agenda[i].telefone.numero);
            printf("\n");

            printf("Dia de nascimento: ");
            printf("%s", agenda[i].nascimento.dia);
            printf("\n");

            printf("Mes: ");
            printf("%s", agenda[i].nascimento.mes);
            printf("\n");

            printf("Ano: ");
            printf("%s", agenda[i].nascimento.ano);
            printf("\n");

            printf("Observacao: ");
            printf("%s", agenda[i].obs);
            }
        }  
    }
}

void ordenarAlfabeticamente()
{
  int i, j;
  for (i = 0; i < numContato-1; i++) {
    for (j = i + 1; j < numContato; j++) {
      int resultadoComparacao = strcmp(agenda[i].nome, agenda[j].nome);
      if (resultadoComparacao > 0) {
        Agenda auxiliar;
        auxiliar = agenda[i];
        agenda[i] =  agenda[j];
        agenda[j] = auxiliar;
      }
    }
  }
}

void retirarPessoa(int indicePessoa)
{
    for (int i = indicePessoa-1; i < numContato - 1; i++) {
  agenda[i] = agenda[i + 1];
}
numContato--;
agenda = (Agenda*) realloc(agenda, numContato * sizeof(agenda));
}

void imprimirAgenda()
{
    printf("Voce deseja imprimir a agenda\n[1]Apenas nome, numero e telefone dos contatos\n[2]Todos os dados\n--");
    int escolha;
    scanf("%i", &escolha);
    if (escolha == 1)
    {
        for (int i = 0; i < numContato; i++)
        {
            printf("\n\n");
            printf("CONTATO %i\n\n", i+1);

            printf("Nome do contato: ");
            printf("%s", agenda[i].nome);
            printf("\n");

            printf("Email: ");
            printf("%s", agenda[i].email);
            printf("\n");
            printf("Telefone DDD: ");
            printf("%s", agenda[i].telefone.ddd);
            printf("\n");

            printf("Numero: ");
            printf("%s", agenda[i].telefone.numero);

            printf("\n");
            printf("\n");
        }
    }
    else if (escolha == 2)
    {
        for (int i = 0; i < numContato; i++)
        {
            printf("\n\n");
            printf("CONTATO %i\n\n", i+1);
        
            printf("Nome do contato: ");
            printf("%s", agenda[i].nome);
            printf("\n");

            printf("Email: ");
            printf("%s", agenda[i].email);
            printf("\n");

            printf("Rua: ");
            printf("%s", agenda[i].endereco.rua);
            printf("\n");

            printf("Bairro: ");
            printf("%s", agenda[i].endereco.bairro);
            printf("\n");

            printf("Cidade: ");
            printf("%s", agenda[i].endereco.cidade);
            printf("\n");

            printf("Estado: ");
            printf("%s", agenda[i].endereco.estado);
            printf("\n");

            printf("Pais: ");
            printf("%s", agenda[i].endereco.pais);
            printf("\n");

            printf("Complemento: : ");
            printf("%s", agenda[i].endereco.complemento);
            printf("\n");

            printf("CEP: ");
            printf("%s", agenda[i].endereco.cep);
            printf("\n");

            printf("Telefone DDD: ");
            printf("%s", agenda[i].telefone.ddd);
            printf("\n");

            printf("Numero: ");
            printf("%s", agenda[i].telefone.numero);
            printf("\n");

            printf("Dia de nascimento: ");
            printf("%s", agenda[i].nascimento.dia);
            printf("\n");

            printf("Mes: ");
            printf("%s", agenda[i].nascimento.mes);
            printf("\n");

            printf("Ano: ");
            printf("%s", agenda[i].nascimento.ano);
            printf("\n");

            printf("Observacao: ");
            printf("%s", agenda[i].obs);
        }
    }
}
