#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef char* string;
  
int main () {
  // create a program that prompts the user to enter a positive number use a do-while loop to keep asking for the number until the user enters a valid positive number.
  // int number;
  // do {
  //   printf("Enter a positive number: ");
  //   scanf("%d", &number);
  //   if (number < 0) {
  //     printf("Please enter a valid positive number.\n");
  //   }
  // } while (number < 0);
  // printf("You entered a valid positive number: %d\n", number);
  // develop a program that calculates the sum of all numbers entered by a user until the user enters 0. the total sum should then be displayed.
  // int sum = 0;
  // int input;
  // do {
  //   printf("Enter a number to add to the sum (0 to stop): ");
  //   scanf("%d", &input);
  //   sum += input;
  // } while (input != 0);
  // printf("The total sum of the numbers entered is: %d\n", sum);

  // create a program that prints the multiplication table of a number entered by the user.
  
  // int number;
  // printf("Enter a number for multiplication: ");
  // scanf("%d", &number);
  // int result = 0;
  // for (int i = 1; i <= 10; i++) {
  //   result = i * number;
  //   printf("%d x %d = %d\n", i, number, result);
  // }
  // printf("Multiplication table printed successfully.\n");

  // create a program using for to display if a number is prime or not.
  // int number;
  // printf("Enter a number to check if it is prime: ");
  // scanf("%d", &number);
  // if (number <= 1) {
  //   printf("%d is not a prime number.\n", number);
  //   return 0;
  // }
  // bool is_prime = true;
  // for (int i = 2; i * i <= number; i++) {
  //   if (number % i == 0) {
  //     is_prime = false;
  //     break;
  //   }
  // }
  // if (is_prime) {
  //   printf("%d is a prime number.\n", number);
  // } else {
  //   printf("%d is not a prime number.\n", number);
  // }

  // create a program using continue to sum all positive numbers entered by the user; skip any negative numbers.
  // int number;
  // int sum = 0;
  // do {
  //   printf("Enter numbers to sum (enter 0 to stop): ");
  //   scanf("%d", &number);
  //   if (number < 0) {
  //     continue; // Skip negative numbers
  //   }
  //   sum += number; // Add positive numbers to the sum
  // } while (number != 0); // Stop when user enters 0
  // printf("The total sum of positive numbers entered is: %d\n", sum);

  // create a program using break to exit a loop when a specific condition is met.
  // int number;
  // while (true) {
  //   printf("Enter a number to check if it is even or odd (enter -1 to exit): ");
  //   scanf("%d", &number);
  //   if (number == -1) {
  //     printf("Exiting the loop.\n");
  //     break; // Exit the loop when user enters -1
  //   }
  //   if (number % 2 == 0) {
  //     printf("%d is an even number.\n", number);
  //   } else {
  //     printf("%d is an odd number.\n", number);
  //   }
  // }
  // printf("Program completed successfully.\n");

  // create a program using continue to print only even numbers using continue for odd numbers.
  // int number;
  // printf("Enter a number to check if it is even or odd: ");
  // scanf("%d", &number);
  // if (number < 0) {
  //   printf("Negative numbers are not considered for even or odd check.\n");
  //   return 0;
  // }
  // if (number % 2 == 0) {
  //   printf("%d is an even number.\n", number);
  // } else {
  //   printf("%d is an odd number.\n", number);
  // }
  // // Use continue to skip odd numbers
  // for (int i = 0; i <= number; i++) {
  //   if (i % 2 != 0) {
  //     continue; // Skip odd numbers
  //   }
  //   printf("%d is an even number.\n", i);
  // }
  // printf("Program completed successfully.\n");

  // write a program that continuously reads integers from the user and prints their squares. use an infinite loop and a break statement to exit when a special number (e.g., -1)is entered.
  int number;
  while (true) {
    printf("Enter a number to print its square (enter -1 to exit): ");
    scanf("%d", &number);
    if (number == -1) {
      printf("Exiting the loop.\n");
      break; // Exit the loop when user enters -1
    }
    printf("The square of %d is %d\n", number, number * number);
  }
  printf("Program completed successfully.\n");

  return 0;
}