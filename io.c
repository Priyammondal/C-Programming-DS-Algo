#include <stdio.h>

int main()
{
    FILE *fptr;
    FILE *fptr2;
    fptr = fopen("Test.txt", "r");
    fptr2 = fopen("Test2.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    else
    {
        // printf("File opened successfully\n");
        // char ch;
        // // fscanf(fptr, "%c", &ch);
        // // printf("First character in the file: %c\n", ch);

        // ch = fgetc(fptr);
        // while (ch != EOF)
        // {
        //     printf("%c", ch);
        //     ch = fgetc(fptr);
        // };
        // printf("\n");
        // fclose(fptr);

        int n;
        fscanf(fptr, "%d", &n);
    }
    return 0;
}