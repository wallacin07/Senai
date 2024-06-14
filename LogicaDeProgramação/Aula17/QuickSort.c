#include <stdio.h>


int particion(int *array,int start, int end)
{
        int pivot = array[end];
        int j = start-1;
        for (int i = start; i < end; i++)
        {
            if (array[i]<=pivot)
            {   j++;

            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;}}
        int temp = array[j + 1];
        array[j + 1] = array[end];
        array[end] = temp;
        printf("\n\n");
        for (int z = 0; z < 10; z++)
        {
            printf("%i ", array[z]);
        }
     
        return j+1;
        
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
}