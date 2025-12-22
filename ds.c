#include <stdio.h>
// Arrays -> Collection of similar data types stored in contiguous memory locations.

// Array is a pointer which points to the first element of the array.
int arr[5] = {10, 20, 30, 40, 50};
// int *ptr = &arr[0]; // ptr points to the first element of arr
// int *ptr2 = arr;    // ptr2 also points to the first element of arr

void printNumbers(int *arr, int size);
void reverseArray(int arr[], int size);
void fibonacci(int n);
void storeTables(int table[][10], int rows, int cols, int number);
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

    // int arr[] = {10, 20, 30, 40, 50};
    // printNumbers(arr, 5);
    // reverseArray(arr, 5);
    // printNumbers(arr, 5);

    // Q > Take user input and print fibonacci series upto that term
    // int n;
    // printf("Enter a number(It should be greater than 2): ");
    // scanf("%d", &n);
    // fibonacci(n);

    // Multi-dimensional Arrays
    // Q> Create a 2D array storing the tables of 2 & 3
    int table[2][10];
    storeTables(table, 0, 10, 1);
    storeTables(table, 1, 10, 2);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[1][i]);
    }

    return 0;
};

void storeTables(int table[][10], int rows, int cols, int number)
{
    for (int i = 0; i < cols; i++)
    {
        table[rows][i] = number * (i + 1);
    }
}

void fibonacci(int n)
{
    if (n <= 2)
        return;
    else
    {
        int fib[n];
        fib[0] = 0;
        fib[1] = 1;
        printf("%d -> ", fib[0]);
        printf("%d -> ", fib[1]);
        for (int i = 2; i < n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
            if (i == n - 1)
            {
                printf("%d", fib[i]);
            }
            else
            {
                printf("%d -> ", fib[i]);
            }
        }
    }
}

void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int start = arr[i];
        int end = arr[size - 1 - i];
        arr[i] = end;
        arr[size - 1 - i] = start;
    }
    printf("\n");
}

// void printNumbers(int arr[], int size)
void printNumbers(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}