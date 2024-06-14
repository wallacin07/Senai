#include <stdio.h>


int particion(int *array,int start, int end)
{
        int pivot = array[end];
        int j = start-1;
        int i;
        for (i = start; i < end+1; i++)
        {
            if (array[i]<=pivot)
            {   j++;
                array[i] = array[i] ^ array[j];
                array[j] = array[i] ^ array[j];
                array[i] = array[i] ^ array[j];
            }
        }
        array[i] = array[i] ^ array[j];
        array[j] = array[i] ^ array[j];
        array[i] = array[i] ^ array[j];
     
        return j + 1;
        
}


void quickSort(int *array,int start, int end)
{
    int m;
    if (start<end)
    {
       m = particion(array,start,end);
        quickSort(array,start,m-1);
        quickSort(array,m+1,end);
    }
    
}



int main()
{
    int array[10] = {1,7,9,2,4,3,6,0,8,5};
    quickSort(array,0,9);

    for(int i =0 ; i<10; i++)
        printf("%d\t",array[i]);
}