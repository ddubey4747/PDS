#include <stdio.h>
#include <string.h>

struct Student {
  char name[30];
  float marks[5];
};
int main() {
  struct Student students[4];
  for (int i = 0; i < 4; i++) {
    printf("Enter name: ");
    fgets(students[i].name, sizeof(students[i].name), stdin);

    printf("Enter marks of 5 subjects: ");
    for (int j = 0; j < 5; j++) {
      scanf("%f", &students[i].marks[j]);
    }
  }


  char name_search[30];
  printf("Enter the name to search: ");
  fgets(name_search, sizeof(name_search), stdin);

  int found = 0;
  for (int i = 0; i < 4; i++) {
    if (strcmp(students[i].name, name_search) == 0) {
       float total_marks = 0;
       for (int j = 0; j< 5; i++) {
        total_marks += students[i].marks[j];
        }
      float average_marks = total_marks / 5;

      printf("Total marks: %f\n", total_marks);
      printf("Average marks: %f\n", average_marks);
      found = 1;
      break;
    }
  }

  if (!found) {
    printf("Student not found.\n");
  }

  return 0;
}
