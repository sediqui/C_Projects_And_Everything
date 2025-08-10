#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef char *string;

int main()
{
  // // create a program that determines if a number positive, negative, or zero
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // if (num > 0) {
  //   printf("The number is positive.\n");
  // } else if (num < 0) {
  //   printf("The number is negative.\n");
  // } else {
  //   printf("The number is zero.\n");
  // }

  // create a program that determines if a number is odd or even
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // num = num % 2; // Calculate remainder when divided by 2
  // if (num % 2 == 0) {
  //   printf("The number is even.\n");
  //   printf("remainder: %d\n", num);
  //   return 0;
  // } else {
  //   printf("The number is odd.\n");
  //   printf("remainder: %d\n", num);
  //   return 0;
  // }

  // create a program that determines the greatest of the three numbers
  // float a, b, c;
  // printf("Enter three numbers: ");
  // scanf("%f %f %f", &a, &b, &c);
  // if (a >= b && a >= c) {
  //   printf("The greatest number is a: %.2f\n", a);
  // } else if (b >= a && b >= c) {
  //   printf("The greatest number is b: %.2f\n", b);
  // } else {
  //   printf("The greatest number is c: %.2f\n", c);
  // }

  // create a program that determines if a given year is a leap year
  // (considering conditions like divisible by 4 but not 100 unless also divisible by 400)

  // int year;

  //   printf("Enter a year: ");
  //   scanf("%d", &year);

  //   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  //       printf("%d is a leap year.\n", year);
  //   else
  //       printf("%d is not a leap year.\n", year);

  // create a program that calculates grades based on marks
  // A -> above 90, B -> above 80, C -> above 70, D -> above 60, F -> below 60
  // The program should prompt the user to enter their marks and then display the corresponding grade.
  // above 90 is A, above 80 is B, above 70 is C, above 60 is D, and below 60 is F
  // double marks;
  // printf("Enter your marks: ");
  // scanf("%lf", &marks);
  // if (marks >= 90) {
  //   printf("Grade: A\n");
  // } else if (marks >= 80) {
  //   printf("Grade: B\n");
  // } else if (marks >= 70) {
  //   printf("Grade: C\n");
  // } else if (marks >= 60) {
  //   printf("Grade: D\n");
  // } else {
  //   printf("Grade: F\n");
  // }

  // create a program that categorize a person into different age groups
  // (child, teenager, adult, senior citizen) based on their age.
  // int age;
  // printf("Enter your age: ");
  // scanf("%d", &age);
  // if (age < 13) {
  //   printf("You are a child.\n");
  // } else if (age >= 13 && age < 20) {
  //   printf("You are a teenager.\n");
  // } else if (age >= 20 && age < 60) {
  //   printf("You are an adult.\n");
  // } else {
  //   printf("You are a senior citizen.\n");
  // }

  // create a program that checks if a number is prime or not
  // int num, i, isPrime = 1;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // if (num <= 1) {
  //   isPrime = 0; // Numbers less than or equal to 1 are not prime
  // } else {
  //   for (i = 2; i <= num / 2; i++) {
  //     if (num % i == 0) {
  //       isPrime = 0; // Found a divisor, not prime
  //       break;
  //     }
  //   }
  // }
  // if (isPrime) {
  //   printf("%d is a prime number.\n", num);
  // } else {
  //   printf("%d is not a prime number.\n", num);
  // }

  // create a program to find the minimum of two numbers using ternary operator.
  // int a, b;
  // printf("Enter two numbers: ");
  // scanf("%d %d", &a, &b);
  // int min = (a < b) ? a : b; // Using ternary operator
  // printf("The minimum of A:%d and B:%d is: %d\n", a, b, min);

  // create a program to find if the givin number is even or odd using ternary operator.
  // int a;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // // Using ternary operator to check if the number is even or odd
  // (a % 2 == 0) ? printf("The number is even.\n") : printf("The number is odd.\n");

  // create a program to calculate the absolute value using ternary operator.
  // double num;

  // printf("Enter a number: ");
  // scanf("%lf", &num);

  // double absVal = (num < 0) ? -num : num;

  // printf("Absolute value: %.2lf\n", absVal);

  // create a program to based on a student's score, categorize as "High", "Moderate", or "Low" using ternary operator (e.g.,High ro scores > 80, Moderate for 50-80, Low for < 50).

  // double score;
  // printf("Enter the student's score: ");
  // scanf("%lf", &score);
  // string category = (score >= 80) ? "High" : (score >= 50 && score < 80) ? "Moderate" : "Low";
  // printf("The student's score category is: %s\n", category);

  // // create a program to print the month of the year based on a number (1-12) input by the user using a switch statement.
  // int month;
  // printf("Enter a month number (1-12): ");
  // scanf("%d", &month);
  // switch (month) {
  //   case 1:
  //     printf("January\n");
  //     break;
  //   case 2:
  //     printf("February\n");
  //     break;
  //   case 3:
  //     printf("March\n");
  //     break;
  //   case 4:
  //     printf("April\n");
  //     break;
  //   case 5:
  //     printf("May\n");
  //     break;
  //   case 6:
  //     printf("June\n");
  //     break;
  //   case 7:
  //     printf("July\n");
  //     break;
  //   case 8:
  //     printf("August\n");
  //     break;
  //   case 9:
  //     printf("September\n");
  //     break;
  //   case 10:
  //     printf("October\n");
  //     break;
  //   case 11:
  //     printf("November\n");
  //     break;
  //   case 12:
  //     printf("December\n");
  //     break;
  //   default:
  //     printf("Invalid month number.\n");
  // }

  // create a program to print the month of the year based on a number (1-12) input by the user using a if statement.
  // int month;
  // printf("Enter a month number (1-12): ");
  // scanf("%d", &month);
  // if (month == 1) {
  //   printf("January\n");
  // } else if (month == 2) {
  //   printf("February\n");
  // } else if (month == 3) {
  //   printf("March\n");
  // } else if (month == 4) {
  //   printf("April\n");
  // } else if (month == 5) {
  //   printf("May\n");
  // } else if (month == 6) {
  //   printf("June\n");
  // } else if (month == 7) {
  //   printf("July\n");
  // } else if (month == 8) {
  //   printf("August\n");
  // } else if (month == 9) {
  //   printf("September\n");
  // } else if (month == 10) {
  //   printf("October\n");
  // } else if (month == 11) {
  //   printf("November\n");
  // } else if (month == 12) {
  //   printf("December\n");
  // } else {
  //   printf("Invalid month number.\n");
  // }

  // create a program to create a simple calculator that uses a switch statement to perform basic arithmetic operations like addition, subtraction, multiplication, and division.
  double a, b, choice;
  printf("Enter two numbers: ");
  scanf("%lf %lf", &a, &b);
  printf("Choose an operation:\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  scanf("%lf", &choice);
  switch ((int)choice) {
    case 1:
      printf("Result: %.2lf\n", a + b);
      break;
    case 2:
      printf("Result: %.2lf\n", a - b);
      break;
    case 3:
      printf("Result: %.2lf\n", a * b);
      break;
    case 4:
      if (b != 0) {
        printf("Result: %.2lf\n", a / b);
      } else {
        printf("Error: Division by zero is not allowed.\n");
      }
      break;
    default:
      printf("Invalid choice.\n");
  }


  return 0;
}