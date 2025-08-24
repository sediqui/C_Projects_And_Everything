#include <stdio.h>

typedef struct Student {
  int roll_No;
  char name[50];
  float marks;
} Student;

int main () {
  // Student s1;
  // s1.roll_No = 101;
  // snprintf(s1.name, sizeof(s1.name), "John Doe");
  // s1.marks = 85.5;
  
  // printf("Roll No: %d\n", s1.roll_No);
  // printf("Name: %s\n", s1.name);
  // printf("Marks: %.2f\n", s1.marks);


  // Student s2[5] = {
  //   {102, "Alice Smith", 90.0},
  //   {103, "Bob Johnson", 78.5},
  //   {104, "Charlie Brown", 88.0},
  //   {105, "Diana Prince", 92.5},
  //   {106, "Ethan Hunt", 80.0}
  // };

  // for (int i = 0; i < 5; i++) {
  //   printf("Roll No: %d\n", s2[i].roll_No);
  //   printf("Name: %s\n", s2[i].name);
  //   printf("Marks: %.2f\n", s2[i].marks);
  //   printf("\n");
  // }

  Student s3 = {107, "Fiona Gallagher", 95.0};
  Student *s3ptr = &s3;
  printf("Roll No: %d\n", s3ptr->roll_No);
  printf("Name: %s\n", s3ptr->name);
  printf("Marks: %.2f\n", s3ptr->marks); 

  // Using pointer arithmetic to access the next student
  Student s4 = {108, "George Costanza", 76.5};
  Student *s4ptr = &s4;
  printf("Roll No: %d\n", (s4ptr + 1)->roll_No);
  printf("Name: %s\n", (s4ptr + 1)->name);
  printf("Marks: %.2f\n", (s4ptr + 1)->marks);


  return 0;
}