#include <stdio.h>

void SelectionSort(int *array, int lenArray)
{
    int j = 0;
    int i = 0;
    for (int i = 0; i < lenArray; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n\n");


    for (i = 0; i < lenArray; i++)
    {
        for ( j = i; j < lenArray; j++)
        {
            if(array[i] > array[j])
            {
                array[i] = array[i] ^ array[j];
                array[j] = array[i] ^ array[j];
                array[i] = array[i] ^ array[j];
            }
        }
    for (int z = 0; z < lenArray; z++)
    {
        printf("%i ", array[z]);
    }
    printf("\n\n");
    }


    for (i = 0; i < lenArray; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n\n");
    

}
int main()
{
    int array[10] = {2,5,8,7,4,6,9,0,3,1};
    int len = sizeof(array)/sizeof(array[0]);
    SelectionSort(array, len);

}