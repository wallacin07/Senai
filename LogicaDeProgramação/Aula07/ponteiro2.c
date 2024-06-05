#include <stdio.h>

void maior_endereco(int *a,int *b)
{
    if (a<b){
    printf("\nO maior valor eh B %d",*b);
    }
    else
    printf("\nO maior valor eh A %d",*a);
}

int main(){
    int a;
    int b;
    printf("\nFale o valor de a: ");
    scanf("%d", &a);
    printf("\nFale o valor de b: ");
    scanf("%d", &b);

    maior_endereco(&a,&b);
}