#include <stdio.h>

void soma(int *ptr)
{
    int somar= 0;
    // int *ponteiro;
    for (int i = 0; i < 5; i++)
    {
        somar += *(ptr + i);
        printf("%d\n", somar);
    }
    
}

int main()
{
 int array[6] = {5,2,3,4,5};
 int *ptr = array;
 soma(ptr);
}
