// Strings -> A character array terminated by a null character ('\0') used to represent text in C.
#include <stdio.h>

void printString(char str[]);
int countLength(char arr[]);

int main()
{
    // char name[] = {'P', 'r', 'i', 'y', 'a', 'm', '\0'};
    // char occupation[] = "Software Engineer"; // this way is easier to read and write and automatically adds the null terminator

    // printString(name);

    // There is a special format specifier in C to read and print strings: %s
    // char name[50];
    // printf("Enter you name: ");
    // scanf("%s", name);
    // printf("Hello, %s!\n", name);

    // Note: scanf with %s stops reading input at the first whitespace character (space, tab, newline). To read full lines with spaces, consider using fgets() and puts().
    // char nameWithSpaces[100];
    // gets(nameWithSpaces); // Using gets() for simplicity; note that gets() is unsafe and deprecated in favor of fgets()
    // fgets(nameWithSpaces, 100, stdin); // safer alternative to gets()
    // puts(nameWithSpaces);

    // String using pointers
    // char *charCanChange = "San Francisco"; // Can be reinitialized to point to another string literal
    // printf("City: %s\n", charCanChange);
    // charCanChange = "Los Angeles"; // Reassigning pointer to another string literal
    // puts(charCanChange);

    // char charCannotChange[] = "New York";
    // puts(charCannotChange);
    // charCannotChange = 'Belarus'; // Error: Attempting to modify

    char name[100];
    printf("Enter you name: ");
    fgets(name, 100, stdin);
    printf("Length of you name is %d\n", countLength(name));

    return 0;
}

int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

// void printString(char str[])
// {
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         printf("%c", str[i]);
//     }
// }