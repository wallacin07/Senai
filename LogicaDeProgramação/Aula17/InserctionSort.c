#include <stdio.h>

void InserctionSort(int *array, int lenArray)
{
    
    for (int i = 0; i < lenArray; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n\n");


    for (int i = 0; i < lenArray; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            if(array[j-1] > array[j])
            {
                array[j-1] = array[j-1] ^ array[j];
                array[j] = array[j-1] ^ array[j];
                array[j-1] = array[j-1] ^ array[j];
            }
        }
        

        
        
    }
        for (int z = 0; z < lenArray; z++)
    {
        printf("%i ", array[z]);
    }
    printf("\n\n");
}

int main()
{
    int array[10] = {2,5,7,9,3,4,6,8,1,0};
    int len = sizeof(array)/sizeof(array[0]);
    InserctionSort(array, len);

}
