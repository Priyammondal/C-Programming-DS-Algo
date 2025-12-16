#include <stdio.h> //preprocessor directive
#include <math.h>

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

        printf("\n");
        return 0; // return 0 for success or zeror error, return 1 for error
}