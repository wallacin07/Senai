#include <stdio.h>
int num1 = 0;
int main()
{
    int n = 0;
    scanf("%i", &n);
    printf("     TABUADA DO %d    \n", n);
    tabuada(n,1);

}



int tabuada(int n, int num1)
{
        

        if (num1 == 11)
        {
            return 1;
        }
        else{
        int multi = n * num1;
        printf("%d x %d = %d\n", n, num1,multi);
        return tabuada(n,num1+1);

        }





}