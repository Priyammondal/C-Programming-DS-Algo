#include <stdio.h> //preprocessor directive
#include <math.h>

int main()
{
        // int age = 28;
        // float pi = 3.14;
        // char hash = '#';
        // // %d, %f, %c => format specifier
        // printf("Hello World\n");
        // printf("Age is %d \n", age);
        // printf("Value of pi is %f \n", pi);
        // printf("Hash looks like this %c \n", hash);

        // int billAmount;
        // printf("Enter the bill amount");
        // scanf("%d", &billAmount); // &variable_name => take the value and store it to the variable address
        // printf("Total bill amount is %d", billAmount);

        // int a, b;
        // printf("Enter a: ");
        // scanf("%d", &a);
        // printf("Enter b: ");
        // scanf("%d", &b);
        // printf("Sum of a and b is %d", a + b);

        int a = 2;
        int b = 3;
        int powerValue = pow(a, b);
        printf("The value of %d ^ %d is %d", a, b, powerValue);

        printf("\n%d", 5%3);
        // printf("\n%d", 5.43%3.21); modulo operator only works on integer values.

        


        return 0; // return 0 for success or zeror error, return 1 for error
}