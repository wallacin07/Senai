#include <stdio.h>
#include <stdlib.h>

void somarVetor(int *array)
{
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        soma += (array[i]);

    }
 printf("\nsoma dos valores: %i", soma);
}

void encontrarMaiorElemento(int *array)
{
    int maior = 0;
    for (int i = 0; i < 5; i++)
    {
        if (maior<array[i])
        {
            maior = array[i];
        }
        
    }
    printf("\nmaior valor no array: %i", maior);
}

void dobrarValores(int *array)
{
    printf("\nantigo valores do array: " );
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }
    int novoarray[6];
    for (int i = 0; i < 5; i++)
    {
        novoarray[i] = array[i] * 2;
    }
    printf("\nnovos valores do array: " );
        for (int i = 0; i < 5; i++)
    {
        printf("%i ", novoarray[i]);
    }
}

void encontrarIndice(int *array, int x)
{
    int indice = 0;
    for (int i = 0; i < 5; i++)
    {
        if (array[i]== x)
        {
            indice = i+1;
        }
    }
        if (indice> 0)
        {
            printf("\nO indice que esse valor se encontra na array eh: %i", indice);
        }
        else
        {
            printf("\n-1");
        }
    
}

void contarElementos(int *array)
{
    int par = 0;
    int impar = 0;

    for (int i = 0; i < 4; i++)
    {
        if (array[i] % 2 == 0)
        {
            par += 1;
        }
        else
        impar += 1;
    }
    printf("\nO numero de pares eh: %i\nO numero de impares eh: %i", par,impar);
}

void retornarinteiro(int x)
{
    printf("\nnumero para printar: %i",x);
}

void inverterVetor(int *array, int tam)
{
    int aux;
    for (int i = 0; i <= tam/2; i++)
    {
      aux = array[i];
      array[i] = array[tam-i];
      array[tam-i] = aux;
    }
    printf("\nvetor invertido: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%i ", array[i]);
    }
}

void muda_indicetres(int *array)
{
    printf("\n\nantiga array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }
    int mudar;
    printf("\nDiga o numero que quer mudar pelo indice 3: ");
    scanf("%i", &mudar);
    array[2] = mudar;
    printf("\nnova array: ");
        for (int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }
}

void removeElemento(int *array,int *tam, int indice)
{
    printf("\n\nantiga array: ");
    for (int i = 0; i < *tam; i++)
    {
        printf("%i ", array[i]);
    }
    for (int i = indice; i < *tam; i++)
    {
        array[i] = array[i+1];
    }
    printf("\nnova array: ");
            for (int i = 0; i < *tam; i++)
    {
        printf("%i ", array[i]);
    }
}

void trocar(int *ptr)
{
    printf("\nantigo valor de x: %i", *ptr);
    int mudar;
    printf("\nDiga o valor da nova variavel: ");
    scanf("%i", &mudar);
    int *ptr_aux = &mudar;
    *ptr = *ptr_aux;
    printf("\nnovo valor de x: %i", *ptr);
}

int main()
{
//-----------------------------------------------------------    

    //Arrays
    
    int array[6]={10,20,30,40,50};
    int alou[5] = {1,2,3,4};
    int inverter[4]= {1,2,3,4};
    int tam = sizeof(inverter)/sizeof(inverter[0]);
    int a[5] = {1,2,3,4,5};
    int bacana[] = {1,3,5,7,9};
    int tamanho = sizeof(bacana)/sizeof(bacana[0]);
    int x = 25;
    double babado[5] = {3.14,2.71,1.618,0.577};


    char nomes[4][25]= {"Alice","Bob","Carol","David"};

//-----------------------------------------------------------   

    //Funções

    trocar(&x);
    somarVetor(&array);
    encontrarMaiorElemento(&array);
    dobrarValores(&array);
    encontrarIndice(&array, 40);
    contarElementos(&alou);
    int (*ptr)(int) = retornarinteiro;
    (*ptr)(25);
    inverterVetor(&inverter,tam-1);
    muda_indicetres(&a);
    removeElemento(&bacana,&tamanho,2);

//-----------------------------------------------------------    

    //Funções dentro da main

    char string[6] = "olaa";
    char *uou = &string;
    printf("\n%s", uou);

    int paulo = 15;
    printf("\n%i\n", paulo);
    int *ptr_paulo = &paulo;
    int mudar = 32;
    int *ptr_mudar = &mudar;
    *ptr_paulo = *ptr_mudar;
    printf("%i", paulo);

//-------------------------------------------------------------   
}