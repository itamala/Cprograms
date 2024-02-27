/*ITAMALA COSMAS
ENE212-0088/2020*/
#include <stdio.h>

int main()
{
    int arr[10];

     for (int i = 0; i < 9; i++)
    {
        arr[i] = i + 1;
    }

        printf("Original array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int deleteIndex = 4; // 0-based index
    int deletedNumber = arr[deleteIndex];
    for (int i = deleteIndex; i < 9; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[9] = 0;

    printf("Array after deletion: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int insertIndex = 4;    
    int insertedNumber = 5; 
    for (int i = 9; i > insertIndex; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[insertIndex] = insertedNumber;

    printf("Final array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
