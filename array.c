/*ITAMALA COSMAS
ENE212-0088/2020*/
#include <stdio.h>

int main()
{
    // Define an array of size 10
    int arr[10];

    // Assign values in ascending order
    for (int i = 0; i < 9; i++)
    {
        arr[i] = i + 1;
    }

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete a number from the middle (let's delete the 5th element)
    int deleteIndex = 4; // 0-based index
    int deletedNumber = arr[deleteIndex];
    for (int i = deleteIndex; i < 9; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Reserve a location for the deleted number
    arr[9] = 0;

    // Print the array after deletion
    printf("Array after deletion: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert a number that was omitted (let's insert 5 back)
    int insertIndex = 4;    // Insert at the position where we deleted earlier
    int insertedNumber = 5; // Number that was omitted
    for (int i = 9; i > insertIndex; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[insertIndex] = insertedNumber;

    // Print the final array
    printf("Final array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
