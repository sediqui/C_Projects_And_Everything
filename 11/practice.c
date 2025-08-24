#include <stdio.h>

// create a program where you need to store and process data for a book with attributes like title, author, and price,demonstrating why a structure is more suitable than separate variables.
// typedef struct Book {
//   char title[100];
//   char author[50];
//   float price;
// } Book;

// Initialize an array of book structures with different data for each book using designated initializers.
// typedef struct Book
// {
//   char title[100];
//   char author[50];
//   float price;
// } Book;

// define a car structure with fields for make, model, year, and color.
// typedef struct Car
// {
//   char make[50];
//   char model[50];
//   int year;
//   char color[20];
// } Car;

// pass a car structure to a function that prints out a description of the car in one complate sentence.
// void printCarDescription(Car *car)
// {
//   printf("The car is a %d %s %s in %s color.\n", car->year, car->make, car->model, car->color);
// }

// write a function that accepts a pointer to a student structure with fields for id, name, year, gpa and modifies its grades.
// typedef struct Student {
//   int id;
//   char name[50];
//   int year;
//   float gpa;
//   struct book {
//     char title[100];
//     char author[50];
//     float price;
//   };
// } Student;

// void modifyGrades(Student *student, float newGpa) {
//   student->gpa = newGpa;
//   printf("Updated GPA for %s (ID: %d) to %.2f\n", student->name, student->id, student->gpa);
// }

// write a function where the student structure also has books they have borrowed inside showing nested stucture usage.

// #define MAX_BOOKS 5

// Nested structure for Book
// typedef struct
// {
//   char title[50];
//   char author[30];
//   int year;
// } Book;

// Student structure containing nested Book array
// typedef struct
// {
//   int id;
//   char name[30];
//   Book borrowed[MAX_BOOKS];
//   int borrowed_count;
// } Student;

// Function to display student info with borrowed books
// void displayStudent(Student s)
// {
//   printf("Student: %s (ID: %d)\n", s.name, s.id);
//   printf("Borrowed Books:\n");
//   for (int i = 0; i < s.borrowed_count; i++)
//   {
//     printf("  %s by %s (%d)\n",
//            s.borrowed[i].title,
//            s.borrowed[i].author,
//            s.borrowed[i].year);
//   }
// }

int main()
{
  // Book b1 = {.title = "The Great Gatsby", .author = "F. Scott Fitzgerald", .price = 10.99};
  // Book *b1ptr = &b1;
  // printf("Enter book details:\n");
  // printf("Title: ");
  // fgets(b1ptr->title, sizeof(b1ptr->title), stdin);
  // printf("Author: ");
  // fgets(b1ptr->author, sizeof(b1ptr->author), stdin);
  // printf("Price: ");
  // scanf("%f", &b1ptr->price);
  // printf("Title: %s\n", b1ptr->title);
  // printf("Author: %s\n", b1ptr->author);
  // printf("Price: $%.2f\n", b1ptr->price);

  // Initialize an array of book structures with different data for each book using designated initializers.
  // Book books[3] = {
  //     {.title = "1984", .author = "George Orwell", .price = 15.99},
  //     {.title = "To Kill a Mockingbird", .author = "Harper Lee", .price = 12.49},
  //     {.title = "The Catcher in the Rye", .author = "J.D. Salinger", .price = 9.99}};
  // // Print the details of each book in the array.
  // printf("Book Details:\n");
  // printf("---------------\n");
  // // Loop through the array and print each book's details.
  // for (int i = 0; i < 3; i++)
  // {
  //   printf("Book %d:\n", i + 1);
  //   printf("Title: %s", books[i].title);
  //   printf("Author: %s", books[i].author);
  //   printf("Price: $%.2f\n\n", books[i].price);
  // }

  // define a car structure with fields for make, model, year, and color.
  // Car car1 = {"Toyota", "Camry", 2011, "white"};
  // Car *carPtr = &car1;
  // printf("Car Details:\n");
  // printf("Make: %s\n", carPtr->make);
  // printf("Model: %s\n", carPtr->model);
  // printf("Year: %d\n", carPtr->year);
  // printf("Color: %s\n", carPtr->color);

  // pass a car structure to a function that prints out a description of the car in one complate sentence.
  // Car car1 = {"Toyota", "Camry", 2011, "white"};
  // Car *carPtr = &car1;
  // printf("Car Details:\n");
  // printCarDescription(carPtr);

  // write a function that accepts a pointer to a student structure with fields for id, name, year, gpa and modifies its grades.
  // Student student1 = {.id = 1, .name = "Alice", .year = 2, .gpa = 3.5};
  // Student *studentPtr = &student1;
  // printf("Before modification: %s (ID: %d) has GPA: %.2f\n", studentPtr->name, studentPtr->id, studentPtr->gpa);
  // printf("Enter student gpa: ");
  // scanf("%f", &student1.gpa);
  // modifyGrades(studentPtr, student1.gpa);

  // write a function where the student structure also has books they have borrowed inside showing nested stucture usage.
  // Student st = {.name = "Alice", .id = 101, .borrowed = {{"1984", "George Orwell", 1949}, {"Clean Code", "Robert C. Martin", 2008}}, 2};

  // displayStudent(st);

  return 0;
}