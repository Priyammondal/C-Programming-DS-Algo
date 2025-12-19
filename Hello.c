#include <stdio.h> //preprocessor directive
#include <math.h>

void printHello(); // function declaration/prototype
void greetings(char nationality);
int sum(int x, int y);

int main()
{
        // int age = 28;
        // float pi = 3.14;
        // char hash = '#';
        // // %d (int), %f (float), %c (character) => format specifier
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

        /*
        Type conversion while doing operationg
        int op int -> int
        int op float -> float
        float op float -> float
        */

        // int a = 2;
        // int b = 3;
        // int powerValue = pow(a, b);
        // printf("The value of %d ^ %d is %d", a, b, powerValue);

        // printf("\n%d", 5 % 3);
        // printf("\n%d", 5.43%3.21); modulo operator only works on integer values.

        // Conversion two types
        //  1. Implicit conversion (compiler does it )
        //  2. Explicit conversion (we need to do it manually)
        // int a = (int)1.9999; // no round off happens, simply removes the desimal part
        // printf("%d", a);

        /*
        Operator precedence:
        *,/,% -> +,- -> =
        if same precedence then comes associativity
        left to right
        int x = 4*3/6*2 = 12/6*2 = 2*2 = 4
        */

        // True returns 1
        // False returns 0

        // Relational operators -> ==, >, >=, <, <=, !=
        // Logical operators -> &&, ||, !
        // Assignment operators -> =, +=, -=, *=, /=, %=

        /*
        Mixed operator expression precedence
        ! -> *,/,% -> +,- -> <, <=, >, >= -> = -> && -> || -> =
        */

        // int age;
        // printf("Enter Age: ");
        // scanf("%d", &age);
        // if (age > 18 && age < 23)
        // {
        //         printf("You are adult\n");
        //         printf("But you can't drive until 22\n");
        // }
        // else if (age >= 23)
        // {
        //         printf("You are adult\n");
        //         printf("You can drive\n");
        // }
        // else
        //         printf("You are not an adult!");

        // Ternary operator
        // age >= 18 ? printf("Adult!") : printf("Not and adult!");

        // int day; // 1-Mon, 2-Tue...
        // printf("Enter day (1-7) :");
        // scanf("%d", &day);

        // switch (day)
        // {
        // case 1:
        //         printf("Today is Monday");
        //         break;
        // case 2:
        //         printf("Today is Tuesday");
        //         break;
        // case 3:
        //         printf("Today is Wednesday");
        //         break;
        // case 4:
        //         printf("Today is Thursday");
        //         break;
        // case 5:
        //         printf("Today is Friday");
        //         break;
        // case 6:
        //         printf("Today is Saturday");
        //         break;
        // case 7:
        //         printf("Today is Sunday");
        //         break;
        // default:
        //         printf("Invalid!");
        // }

        /*
        we can put if inside another if, similarly we can put switch inside another swith for nested logic
        */

        // char ch;
        // printf("Enter a character : ");
        // scanf("%c", &ch);

        // if (ch >= 'A' && ch <= 'Z')
        // {
        //         printf("Upper Case!");
        // }
        // else if (ch >= 'a' && ch <= 'z')
        // {
        //         printf("Lower Case!");
        // }
        // else
        // {
        //         printf("Not english letter!");
        // }

        // do
        // {
        //         int num;
        //         printf("Enter a number: ");
        //         scanf("%d", &num);
        //         printf("%d\n", num);
        //         if (num % 2 != 0)
        //                 break;
        //         printf("You entered even number, try again!\n");
        // } while (1);
        // printf("You entered odd number, exiting loop!");

        // for (int i = 1; i <= 3; i++)
        // {
        //         for (int j = 1; j <= 3; j++)
        //         {
        //                 if (j == 2)
        //                 {
        //                         break;
        //                 }
        //                 printf("i=%d j=%d\n", i, j);
        //         }
        // }

        // continue → skips current iteration of the current loop
        // break → exits current loop

        //         int grid[3][3] = {
        //             {1, 2, 3},
        //             {4, 5, 6},
        //             {7, 8, 9}};

        //         for (int row = 0; row < 3; row++)
        //         {
        //                 for (int col = 0; col < 3; col++)
        //                 {

        //                         printf("Checking grid[%d][%d] = %d\n",
        //                                row, col, grid[row][col]);

        //                         if (grid[row][col] == 5)
        //                         {
        //                                 printf("FOUND 5! Exiting all loops...\n");
        //                                 goto end_search;
        //                         }
        //                 }
        //         }

        // end_search:
        //         printf("Search finished.\n");

        // Q) Print all numbers from 1 to 10 except 6
        // int num = 1;
        // while (num <= 10)
        // {
        //         if (num == 6)
        //         {
        //                 num++;
        //                 continue;
        //         }
        //         printf("%d ", num);
        //         num++;
        // }

        // Q) Print all the odd numbers from 5 to 50
        // for (int i = 5; i <= 50; i++)
        // {
        //         if (i % 2 == 0)
        //                 continue;
        //         printf("%d ", i);
        // }

        // Q) Print the factorial of a number entered by user
        // int num, factorial = 1;
        // printf("Enter a number: ");
        // scanf("%d", &num);
        // for (int i = num; i >= 1; i--)
        // {
        //         factorial *= i;
        // }
        // printf("Factorial of %d is %d", num, factorial);

        // Q) Print reverse of the table for number n
        // int num = 12;
        // for (int i = 10; i >= 1; i--)
        // {
        //         printf("%d X %d = %d\n", num, i, num * i);
        // }

        // printHello(); // function call

        // Q) Write a function to print Namaste if user is Indian and Bonjour if user is French
        // char nationality;
        // printf("Enter 'I' for Indian and 'F' for French: ");
        // scanf("%c", &nationality);
        // greetings(nationality);

        int a, b;
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);

        int c = sum(a, b); // passing arguments/actual parameters
        printf("Sum of %d & %d is %d", a, b, c);

        printf("\n");
        return 0; // return 0 for success or zeror error, return 1 for error
}

// function definition
void printHello()
{
        printf("Hello\n");
};

int sum(int x, int y) // parameters/formal parameters
// x and y are the copied values of a and b, so any changes to x and y won't affect a and b
{
        return x + y;
}

void greetings(char nationality)
{
        switch (nationality)
        {
        case 'I':
        case 'i':
                printf("Namaste 🙏");
                break;
        case 'F':
        case 'f':
                printf("Bonjour!");
                break;
        default:
                printf("Invalid Input!");
        }
};
