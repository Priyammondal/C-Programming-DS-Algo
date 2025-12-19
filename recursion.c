#include <stdio.h>

void printCount(int count);
int sumOfNaturalNums(int num);
int factorial(int num);
int fibonacci(int num);
int main()
{
    /*
    Anything that can be done with iteration can be easily done with recursion vise-versa.
    Base case is the condition which stops recursion.
    iteration has infinite loop & recursion has stack overflow.
    */
    // printCount(5);

    // Q> Write a program to calculate the sum of first n natural numbers
    // int sum = sumOfNaturalNums(5);
    // printf("sum of natural nums -> %d", sum);

    // Q> write a program to take a number from user and write the factorial of the number
    // int num;
    // printf("Enter a number : ");
    // scanf("%d", &num);

    // int res = factorial(num);
    // printf("Factorial of %d is %d", num, res);

    // Q> fibonacci series
    // int res = fibonacci(6);
    // printf("The 5th term of fibonacci series is : %d", res);

    // write fibonacci series using loop
    int sum, n = 5, first = 0, second = 1;
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            printf("%d -> ", i);
        }
        else
        {
            sum = first + second;
            first = second;
            second = sum;
            if (i < n - 1)
            {
                printf("%d -> ", sum);
            }
            else
            {
                printf("%d", sum);
            }
        }
    }

    return 0;
}

int fibonacci(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    int sum = fibonacci(num - 1) + fibonacci(num - 2);
    return sum;
}

int factorial(int num)
{
    if (num <= 1)
        return 1;
    int temp = num * factorial(num - 1);
    return temp;
}

int sumOfNaturalNums(int num)
{
    int sum;
    if (num == 1)
        return 1;
    else
    {
        sum = num + sumOfNaturalNums(num - 1);
    }
    return sum;
}

void printCount(int count)
{
    if (count < 0)
    {
        return;
    }
    else
    {
        printf("%d\n", count);
        printCount(count - 1);
    }
}