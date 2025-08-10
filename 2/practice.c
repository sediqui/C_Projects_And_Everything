#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef char* string;
#define PI 3.14159 // or const double PI = 3.14159; // Define a constant for pi
  
int main (int argc,string argv[]) {
  // int a=3, b=4;
  // printf("a + b = %d\n", sizeof(a + b));
  // char firstName[50];
  // char lastName[50];
  // int age;
  // printf("Enter your first name: ");
  // scanf("%49s", firstName); // Limit input to avoid buffer overflow
  // printf("Enter your last name: ");
  // scanf("%49s", lastName); // Limit input to avoid buffer overflow
  // printf("Enter your age: ");
  // scanf("%d", &age);
  // printf("Hello, %s %s! You are %d years old.\n", firstName, lastName, age);
  // create a program to print the area of  a square by inputting its side length using c language
  // double side, area;

  //   printf("Enter side length of the square: ");
  //   scanf("%lf", &side);

  //   area = side * side;

  //   printf("Area of the square = %.2lf\n", area);

  // create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user

  // double radius, circumference;

  //   printf("Enter the radius of the circle: ");
  //   scanf("%lf", &radius);

  //   circumference = 2 * PI * radius;

  //   printf("Circumference = %.2lf\n", circumference);

  // create a program to print the area of  a square by inputting
  // double radius, area;

  //   printf("Enter the radius of the circle: ");
  //   scanf("%lf", &radius);

  //   area = PI * radius * radius;

  //   printf("Area of the circle = %.2lf\n", area);

  // create a program to swap two numbers using a temporary variable in C language
  int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("before swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);

  return 0;
}

// all done