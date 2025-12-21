#include <stdio.h>
// Arrays -> Collection of similar data types stored in contiguous memory locations.

// Array is a pointer which points to the first element of the array.
int arr[5] = {10, 20, 30, 40, 50};
// int *ptr = &arr[0]; // ptr points to the first element of arr
// int *ptr2 = arr;    // ptr2 also points to the first element of arr

void printNumbers(int *arr, int size);
int main()
{
    // int aadhar[5];

    // int *ptr = &aadhar[0];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter Aadhar number %d: ", i);
    //     scanf("%d", ptr + i); // or &aadhar[i]
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Aadhar number %d is: %d\n", i, *(ptr + i)); // or aadhar[i]
    // }

    int arr[] = {10, 20, 30, 40, 50};
    printNumbers(arr, 5);
    return 0;
}

// void printNumbers(int arr[], int size)
void printNumbers(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}