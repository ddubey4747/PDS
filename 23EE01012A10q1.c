#include <stdio.h>
struct Student {
    int rollNumber;
    char name[50];
    int age;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        students[i].rollNumber = i + 1;
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }
    printf("student with roll number 2:\n");
    for (int i = 0; i < 5; i++) {
        if (students[i].rollNumber == 2) {
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            break;
        }
    }

    return 0;
}
