#include <stdio.h>

void maior(int *ptr)
{
    int maiorzin = 0;
      for (int i = 0; i < 5; i++)
    {
        if (maiorzin<*(ptr + i))
        {
            maiorzin = *(ptr + i);
        }
        
    }
    printf("maior numero: %d", maiorzin);
}

int main()
{
 int array[6] = {7,2,3,9,5};
 int *ptr = array;
 maior(ptr);
}