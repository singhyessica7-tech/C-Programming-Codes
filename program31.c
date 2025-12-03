//program to enter student structure

#include <stdio.h>

struct student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct student s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter student age: ");
    scanf("%d", &s.age);

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
