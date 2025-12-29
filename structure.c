#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

// typedef is used to create an alias for a data type.
typedef struct ComputerEngineeringStudent
{
    int roll;
    float cgpa;
    char name[100];
} CSE;

int main()
{
    // struct student s1;
    // s1.roll = 101;
    // s1.cgpa = 9.5;
    // strcpy(s1.name, "Alice");

    // printf("Student 1 Details:\n");
    // printf("Name: %s\n", s1.name);
    // printf("Roll: %d\n", s1.roll);
    // printf("CGPA: %.2f\n\n", s1.cgpa);

    // struct student s2;
    // s2.roll = 100;
    // s2.cgpa = 8.5;
    // strcpy(s2.name, "Bhabani");

    // printf("Student 2 Details:\n");
    // printf("Name: %s\n", s2.name);
    // printf("Roll: %d\n", s2.roll);
    // printf("CGPA: %.2f\n", s2.cgpa);

    // struct student s3 = {102, 9.0, "Charlie"};

    // printf("Student 3 Details:\n");
    // printf("Name: %s\n", s3.name);
    // printf("Roll: %d\n", s3.roll);
    // printf("CGPA: %.2f\n", s3.cgpa);

    // struct student ece[100];
    // ece[0].roll = 201;
    // ece[0].cgpa = 9.2;
    // strcpy(ece[0].name, "David");

    // printf("ECE Student 1 Details:\n");
    // printf("Name: %s\n", ece[0].name);
    // printf("Roll: %d\n", ece[0].roll);
    // printf("CGPA: %.2f\n", ece[0].cgpa);

    // struct student *ptr = &ece[0];
    // printf("\nAccessing via pointer:\n");
    // printf("Name: %s\n", ptr->name);
    // printf("Name: %s\n", (*ptr).name);

    CSE cse1;
    cse1.roll = 301;
    cse1.cgpa = 9.8;
    strcpy(cse1.name, "Eve");
    printf("CSE Student 1 Details:\n");
    printf("Name: %s\n", cse1.name);
    printf("Roll: %d\n", cse1.roll);
    printf("CGPA: %.2f\n", cse1.cgpa);

    return 0;
}