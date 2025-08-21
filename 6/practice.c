#include <stdbool.h>
#include <stdio.h>
#include <time.h>

typedef char *string;

// void greet() {
//     printf("Hello, World!\n");
// }

// float sum(float a, float b, float c, float d) {
//     return a + b + c + d;
// }

// int square(int x) {
//     return x * x;
// }

// call a function print_date that prints the current date. define the function without any parameters.
// void print_date() {
//     time_t t = time(NULL);
//     struct tm tm = *localtime(&t);
//     printf("%04d-%02d-%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
// }

// create a function max that takes two float arguments and returns the larger value.
// float max(float a, float b) {
//     return (a > b) ? a : b;
// }

// demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function.
// void increment(int x) {
//     x++;
//     printf("Inside increment function: %d\n", x);
// }

// demonstrate with a function increment that the original integer passed to it.
// it's shod changed after incrementing it inside the function.
// int increment(int *x)
// {
//   (*x)++;
//   printf("Inside increment function: %d\n", *x);
// }

// call a function get_average that takes five int numbers and returns the average.
// float get_average(int a, int b, int c, int d, int e) {
//     return (a + b + c + d + e) / 5.0f;
// }

// create a program using recursion to display the fibonacci series upto a certain number.
// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// create a program using recursion to check if a number is a palindrome using recursion.
int is_palindrome(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    rev = rev * 10 + num % 10;
    return is_palindrome(num / 10, rev);
}

int main()
{
  // This program greets the user and calculates the sum of four numbers.
  // greet();
  // float a;
  // printf("Enter first number: ");
  // scanf("%f", &a);
  // float b;
  // printf("Enter second number: ");
  // scanf("%f", &b);
  // float c;
  // printf("Enter third number: ");
  // scanf("%f", &c);
  // float d;
  // printf("Enter fourth number: ");
  // scanf("%f", &d);
  // float result = sum(a, b, c, d);
  // printf("You entered: %.2f, %.2f, %.2f, %.2f\n", a, b, c, d);
  // printf("The sum of the numbers is: %.2f\n", result);

  // define a function that takes and int and returns its square
  // int x;
  // printf("Enter an integer to square: ");
  // scanf("%d", &x);
  // int result = square(x);
  // printf("The square of %d is: %d\n", x, result);

  // call a function print_date that prints the current date. define the function without any parameters.
  // print_date();

  // create a function max that takes two float arguments and returns the larger value.
  // float num1, num2;
  // printf("Enter first float number: ");
  // scanf("%f", &num1);
  // printf("Enter second float number: ");
  // scanf("%f", &num2);
  // float maximum = max(num1, num2);
  // printf("The larger value between %.2f and %.2f is: %.2f\n", num1, num2, maximum);

  // demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function.
  // int original_value;
  // printf("Enter an integer to increment: ");
  // scanf("%d", &original_value);
  // printf("Original value before incrementing: %d\n", original_value);
  // increment(original_value);
  // printf("Original value after incrementing function call: %d\n", original_value);
  // The original value remains unchanged after the increment function call.

  // demonstrate with a function increment that the original integer passed to it.
  // it's shod changed after incrementing it inside the function.
  // int value_to_increment;
  // printf("Enter an integer to increment by reference: ");
  // scanf("%d", &value_to_increment);
  // printf("Original value before incrementing by reference: %d\n", value_to_increment);
  // increment(&value_to_increment);
  // printf("Original value after incrementing by reference function call: %d\n", value_to_increment);

  // call a function get_average that takes five int numbers and returns the average.
  // int num1, num2, num3, num4, num5;
  // printf("Enter five integers to calculate the average:\n");
  // printf("1st number: ");
  // scanf("%d", &num1);
  // printf("2nd number: ");
  // scanf("%d", &num2);
  // printf("3rd number: ");
  // scanf("%d", &num3);
  // printf("4th number: ");
  // scanf("%d", &num4);
  // printf("5th number: ");
  // scanf("%d", &num5);
  // float average = get_average(num1, num2, num3, num4, num5);
  // printf("The average of the five numbers is: %.2f\n", average);

  // create a program using recursion to display the fibonacci series upto a certain number.
  // int n;
  // printf("Enter the number of terms in the Fibonacci series: ");
  // scanf("%d", &n);
  // printf("Fibonacci series up to %d terms:\n", n);
  // for (int i = 0; i < n; i++) {
  //     printf("%d ", fibonacci(i));
  // }
  // printf("\n");
  // The Fibonacci series is displayed up to the specified number of terms.
  // The program demonstrates various functions including greeting, summing numbers, squaring an integer, printing the current date, finding the maximum of two floats, incrementing integers, calculating averages, and displaying the Fibonacci series.

  // create a program to display the fibonacci series upto a certain number using loop.
  // int a = 0, b = 1, next;
  // printf("Fibonacci series using loop up to %d terms:\n", n);
  // for (int i = 0; i < n; i++) {
  //     if (i <= 1) {
  //         next = i;
  //     } else {
  //         next = a + b;
  //         a = b;
  //         b = next;
  //     }
  //     printf("%d ", next);
  // }
  
  // printf("\n");
  // The Fibonacci series is displayed using a loop up to the specified number of terms.
  // This program demonstrates the use of functions, recursion, and loops in C to perform various tasks such as calculations and series generation.


  // create a program using recursion to check if a number is a palindrome using recursion.
  int number, reversed_number;
  printf("Enter a number to check if it is a palindrome: ");
  scanf("%d", &number);
  reversed_number = is_palindrome(number, 0);
  if (reversed_number == number) {
      printf("%d is a palindrome.\n", number);
  } else {
      printf("%d is not a palindrome.\n", number);
  }
  // The program checks if the entered number is a palindrome using recursion.
  // A palindrome is a number that reads the same backward as forward.
  // For example, 121 is a palindrome, while 123 is not.
  // The is_palindrome function recursively reverses the number and checks if it matches the original number.
  // The program demonstrates the use of recursion to solve the palindrome problem.


  return 0;
}