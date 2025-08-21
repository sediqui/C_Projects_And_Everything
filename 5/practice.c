#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef char *string;
// const int LENGTH = 10;

// int factorial(int n) {
//   if (n == 0 || n == 1) {
//     return 1;
//   }
//   return n * factorial(n - 1);
// }

// int sum_of_digits(int n)
// {
//   if (n == 0)
//   {
//     return 0;
//   }
//   return (n % 10) + sum_of_digits(n / 10);
// }

// int calculateGCD(int a, int b)
// {
//   while (b > 0)
//   while (b != 0)
//   {
//     int temp = b;
//     b = a % b;
//     a = temp;
//   }
//   return a;
// }

// // Function to calculate LCM
// int calculateLCM(int a, int b)
// {
//   if (a == 0 || b == 0)
//   {
//     return 0; // LCM is 0 if either number is 0
//   }
//   return (a * b) / calculateGCD(a, b);
// }

// int is_armstrong(int n)
// {
//   int original = n, sum = 0;
//   int digits = (n == 0) ? 1 : (int)log10(n) + 1;

//   while (n > 0)
//   {
//     int digit = n % 10;
//     sum += (int)pow(digit, digits);
//     n /= 10;
//   }
//   return sum == original;
// }

int main()
{

  // develop a program to print multiplication table of a number
  // int number;
  // printf("Enter a number for multiplication table: ");
  // scanf("%d", &number);

  // int result = 0;
  // for (int i = 1; i <= LENGTH; i++) {
  //   result = i * number;
  //   printf("%d x %d = %d\n", i, number, result);
  // }

  // create a program to print sum of first 100 odd and even numbers

  // int number = 100;
  // int result = 0;
  // for (int i = 1; i <= number; i++)
  // {
  //   if (i % 2 == 0) {
  //     // printf("%d is even\n", i);
  //     continue;
  //   }
  //   // else {
  //   //   printf("%d is odd\n", i);
  //   // }
  //   // int r = i * (i + 1);
  //   // printf("%d\n", r);
  //   result += 1;
  // }
  // printf("Total odd numbers from 1 to %d: %d\n", number, result);

  // int results1 = result * (result + 1);

  // printf("Sum of first %d odd numbers: %d\n", result, results1);

  // int results2 = result * result;

  // printf("Sum of first %d even numbers: %d\n", result, results2);

  // printf("Sum of first %d even: %d and odd: %d: %d\n", result, results2, results1, results1 + results2);

  // write a function that calculates the factorial of a given number.
  // int number;
  // printf("Enter a number to calculate its factorial: ");
  // scanf("%d", &number);
  // if (number < 0) {
  //   printf("Factorial is not defined for negative numbers.\n");
  // } else {
  //   int fact = factorial(number);
  //   printf("Factorial of %d is %d\n", number, fact);
  // }

  // create a program that calculates the factorial of a given number.

  // int number;
  // printf("Enter a number to calculate its factorial: ");
  // scanf("%d", &number);
  // if (number < 0) {
  //   printf("Factorial is not defined for negative numbers.\n");
  // } else {
  //   int fact = 1;
  //   for (int i = 1; i <= number; i++) {
  //     fact *= i;
  //   }
  //   printf("Factorial of %d is %d\n", number, fact);
  // }

  // create a program that calculates the factorial of a given number using if statement.
  // int number;
  // printf("Enter a number to calculate its factorial: ");
  // scanf("%d", &number);
  // if (number < 0) {
  //   printf("Factorial is not defined for negative numbers.\n");
  // } else {
  //   int fact = 1;
  //   if (number == 0 || number == 1) {
  //     fact = 1;
  //   } else {
  //     for (int i = 2; i <= number; i++) {
  //       fact *= i;
  //     }
  //   }
  //   printf("Factorial of %d is %d\n", number, fact);
  // }

  // create a program that computes the sum of the digits of an integer number.
  // int number;
  // printf("Enter an integer number to compute the sum of its digits: ");
  // scanf("%d", &number);
  // int sum = 0;
  // int temp = number < 0 ? -number : number; // Handle negative numbers
  // // printf("Computing sum of digits for: %d\n", temp);
  // while (temp > 0) {
  //   sum += temp % 10; // Add the last digit to sum
  //   temp /= 10; // Remove the last digit
  // }
  // printf("The sum of the digits of %d is %d\n", number, sum);
  // create a program that computes the sum of the digits of an integer number using recursion.
  // int sum_recursive = sum_of_digits(number < 0 ? -number : number);
  // printf("The sum of the digits of %d using recursion is %d\n", number, sum_recursive);

  // int num1;
  // printf("Enter first number: ");
  // scanf("%d", &num1);
  // int num2;
  // printf("Enter second number: ");
  // scanf("%d", &num2);
  // int lcm_result;

  // int result = calculateGCD(num1, num2);

  // printf("The GCD of %d and %d is %d\n", num1, num2, result);

  // lcm_result = calculateLCM(num1, num2);
  // if (lcm_result == 0) {
  //   printf("LCM is not defined for zero.\n");
  //   return 0;
  // }

  // printf("The LCM of %d and %d is %d\n", num1, num2, lcm_result);

  // create a program to check whether a number is prime or not.
  // int number;
  // printf("Enter a number to check if it is prime: ");
  // scanf("%d", &number);
  // if (number <= 1) {
  //   printf("%d is not a prime number.\n", number);
  // } else {
  //   bool is_prime = true;
  //   for (int i = 2; i * i <= number; i++) {
  //     if (number % i == 0) {
  //       is_prime = false;
  //       break;
  //     }
  //   }
  //   if (is_prime) {
  //     printf("%d is a prime number.\n", number);
  //   } else {
  //     printf("%d is not a prime number.\n", number);
  //   }
  // }

  // create a program to reverse the digits of a number.
  // int number;
  // printf("Enter a number to reverse its digits: ");
  // scanf("%d", &number);
  // int reversed = 0;
  // int temp = number < 0 ? -number : number; // Handle negative numbers
  // while (temp > 0) {
  //   reversed = reversed * 10 + temp % 10; // Build the reversed number
  //   temp /= 10; // Remove the last digit
  // }
  // if (number < 0) {
  //   reversed = -reversed; // Restore the sign for negative numbers
  // }
  // printf("The reversed number of %d is %d\n", number, reversed);

  // create a program to print the fibonacci series up to a certain number.
  // int n;
  // printf("Enter the number of terms in the Fibonacci series: ");
  // scanf("%d", &n);
  // int a = 0, b = 1, next;
  // printf("Fibonacci series up to %d terms:\n", n);
  // for (int i = 1; i <= n; i++) {
  //   printf("%d ", a);
  //   next = a + b; // Calculate the next term
  //   a = b; // Update a to the next term
  //   b = next; // Update b to the next term
  // }
  // printf("\n");

  // create a program to check if a number is an armstrong number.
  // int number;
  // printf("Enter a number to check if it is an Armstrong number: ");
  // scanf("%d", &number);
  // int original_number = number;
  // int sum = 0;
  // int digits = 0;
  // int temp = number;
  // // Count the number of digits
  // while (temp > 0)
  // {
  //   digits++;
  //   temp /= 10;
  // }
  // temp = original_number;
  // // Calculate the sum of the digits raised to the power of the number of digits
  // while (temp > 0)
  // {
  //   int digit = temp % 10;
  //   sum += pow(digit, digits); // Use pow to raise digit to the power of digits
  //   temp /= 10;
  // }
  // if (sum == original_number)
  // {
  //   printf("%d is an Armstrong number.\n", original_number);
  // }
  // else
  // {
  //   printf("%d is not an Armstrong number.\n", original_number);
  // }

  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);

  // if (is_armstrong(num))
  //   printf("%d is an Armstrong number.\n", num);
  // else
  //   printf("%d is not an Armstrong number.\n", num);

  // create a program to verify if a number is a palindrome.
  // int number;
  // printf("Enter a number to check if it is a palindrome: ");
  // scanf("%d", &number);
  // int original_number = number;
  // int reversed = 0;
  // int temp = number < 0 ? -number : number; // Handle negative numbers
  // while (temp > 0) {
  //   reversed = reversed * 10 + temp % 10; // Build the reversed number
  //   temp /= 10; // Remove the last digit
  // }
  // if (number < 0) {
  //   reversed = -reversed; // Restore the sign for negative numbers
  // }
  // if (reversed == original_number) {
  //   printf("%d is a palindrome.\n", original_number);
  // } else {
  //   printf("%d is not a palindrome.\n", original_number);
  // }

  // create a program that print patterns.
  // int n;
  // printf("Enter the number of rows for the pattern: ");
  // scanf("%d", &n);
  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= i; j++) {
  //     printf("* ");
  //   }
  //   printf("\n");
  // }
  // printf("Pattern printed successfully.\n");


  // create a program that print patterns reverse right half pyramid.
  // int n; 
  // printf("Enter the number of rows for the reverse right half pyramid pattern: ");
  // scanf("%d", &n);
  // for (int i = n; i >= 1; i--) {
  //   for (int j = 1; j <= i; j++) {
  //     printf("* ");
  //   }
  //   printf("\n");
  // }
  // printf("Reverse right half pyramid pattern printed successfully.\n");

  // create a program that print patterns left half pyramid.
  int n; 
  printf("Enter the number of rows for the left half pyramid pattern: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      printf(" "); // Print spaces for left alignment
    }
    for (int k = 1; k <= i; k++) {
      printf("*");
    }
    printf("\n");
  }
  printf("Left half pyramid pattern printed successfully.\n");

  return 0;
}