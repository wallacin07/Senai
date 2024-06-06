#include "LinkedListQueueNoHead.h"
#include <stdio.h>
#include <stdlib.h>

int compareTwoLists(LinkedListNoHead *List1, LinkedListNoHead *List2,int tamanhoLinkedList1,int tamanhoLinkedList2)
{
   int Array[tamanhoLinkedList1];
   copyLinkedListForArray(List1,Array);
      int Array2[tamanhoLinkedList2];
  copyLinkedListForArray(List2,Array2);

    printf("\n");
    printf("LinkedList1:\n");
    for (int i = 0; i < tamanhoLinkedList1; i++)
    {
        printf("%i ", Array[i]);
    }

    printf("\n");
    printf("LinkedList2:\n");
    for (int i = 0; i < tamanhoLinkedList2; i++)
    {
        printf("%i ", Array2[i]);
    }




   if (tamanhoLinkedList1 == tamanhoLinkedList2)
   {
    printf("\n");
        for (int i = 0; i < tamanhoLinkedList1; i++)
        {
            if (Array[i] == Array2[i])
            {
                
            }
            else{
                printf("\n\nNao eh igual");
                return 0;
            }
        }
            printf("\neh igual");
            return 0;
        }
    else
    {
        printf("\n\nNao eh igual");
        return 0;
    }
   

}

int main()
{
    LinkedListNoHead *List = NULL;
    int array[4] = {1, 2, 3, 4};
    copyArrayForLinkedList(array, &List, 4);
    displayLL(List);
    int array2[5];
    LinkedListNoHead *List2 = NULL;
    List2 = enqueue(List2, 202);
    List2 = enqueue(List2, 204);
    List2 = enqueue(List2, 203);
    List2 = enqueue(List2, 205);
    copyLinkedListForArray(List2, array2);
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%i ", array2[i]);
    }
    printf("\n\n");
    int lenList1 = lenLinkedList(List);
    int lenList2 = lenLinkedList(List2);
    compareTwoLists(List,List2,lenList1,lenList2);
    
}

