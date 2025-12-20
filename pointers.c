#include <stdio.h>

void square(int n);
void _square(int *n);

int main()
{
    // ⭐Pointer is a variable that stores the memory address of another variable

    // int age = 27;
    // int *ptr = &age;
    // int _age = *ptr;
    // printf("%d", _age);

    // address printing
    // printf("%p \n", &age);
    // printf("%u \n", &age);
    // printf("%u \n", ptr);
    // printf("%u \n", &ptr);

    // value printing
    // printf("%d \n", age);
    // printf("%d \n", *ptr);
    // printf("%d \n", *(&age));

    // int num;
    // int *ptr;

    // ptr = &num;
    // *ptr = 0;

    // printf("num = %d\n", num);
    // printf("*ptr = %d\n", *ptr);

    // *ptr += 5;
    // printf("num = %d\n", num);
    // printf("*ptr = %d\n", *ptr);

    // (*ptr)++;
    // printf("num = %d\n", num);
    // printf("*ptr = %d\n", *ptr);

    // ⭐⭐Pointer to pointer
    // A variable that stores the address of another pointer

    // int i = 5;
    // int *ptr = &i;
    // int **pptr = &ptr;

    // printf("%d\n", &i);
    // printf("%d\n", *pptr);

    int number = 4;
    // call by value
    square(number);
    printf("Number = %d\n", number);
    // call by reference
    _square(&number);
    printf("Number = %d\n", number);
};

void square(int n)
{
    n = n * n;
    printf("Square = %d\n", n);
}
void _square(int *n)
{
    *n = *n * *n;
    printf("_Square = %d\n", *n);
}