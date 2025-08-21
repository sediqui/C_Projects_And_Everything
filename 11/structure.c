#include <stdio.h>

typedef struct Student {
  int roll_No;
  char name[50];
  float marks;
} Student;

int main () {
  Student s1;
  s1.roll_No = 101;
  snprintf(s1.name, sizeof(s1.name), "John Doe");
  s1.marks = 85.5;
  
  printf("Roll No: %d\n", s1.roll_No);
  printf("Name: %s\n", s1.name);
  printf("Marks: %.2f\n", s1.marks);


  return 0;
}