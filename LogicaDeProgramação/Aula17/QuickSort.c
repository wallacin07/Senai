#include <stdio.h>


void particion(int *array,int start, int end)
{
    int pivot = array[end];
    int j = -1;
    int i;
    for (int i = 0; i < end+1; i++)
    {
        printf("%i ", array[i]);
    }


    for (i = start; i < end+1; i++)
    {
        if (array[i]<pivot)
        {
            printf("%i",j);
            j++;
            array[i] = array[i] ^ array[j];
            array[j] = array[i] ^ array[j];
            array[i] = array[i] ^ array[j];
            printf("\n\n");
    for (int z = 0; z < end+1; z++)
    {
        printf("%i ", array[z]);
    }
        }
        
    }




    j++;
    array[i] = array[i] ^ array[j];
    array[j] = array[i] ^ array[j];
    array[i] = array[i] ^ array[j];
    printf("\n\n");
    for (int z = 0; z < end+1; z++)
    {
        printf("%i ", array[z]);
    }
    
}



int main()
{
    int array[10] = {1,7,9,2,4,3,6,0,8,5};
    particion(array,0,9);
}