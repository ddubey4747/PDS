#include <stdio.h>
#include <string.h>

struct Students {
    int Regn_no;
    float CGPA;
    char name[30];
    char Branch[30];
};

void Sort(struct Students students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].Regn_no > students[j + 1].Regn_no) {
                struct Students temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Students students[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter your Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter your Branch: ");
        fgets(students[i].Branch, sizeof(students[i].Branch), stdin);
        printf("Enter your CGPA: ");
        scanf("%f", &students[i].CGPA);
        printf("Enter your REGN: ");
        scanf("%d", &students[i].Regn_no);
        getchar(); 
    }
    Sort(students, 10);
    printf("Sorted by Regn no.:\n");
    for (int i = 0; i < 10; i++) {
        printf("Regn no.: %d, Name: %s, Branch: %s, CGPA: %.2f\n", students[i].Regn_no, students[i].name, students[i].Branch, students[i].CGPA);
    }

    return 0;
}
