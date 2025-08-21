#include <stdio.h>
#include <math.h>
#include <stdbool.h>

extern void calculator();

int main()
{
  calculator(); // Call the calculator function
  return 0;
}

void calculator()
{
  char choice;
  double num1, num2;
  float result = 0.0;
  bool isTrue = true; // Initialize the loop control variable
  while (isTrue)
  {
    printf("Welcome to the Calculator!\n");
    printf("Enter number 1:\n");
    scanf("%lf", &num1); // Read the first number from user input
    printf("choose an operation:\n");
    scanf(" %c", &choice); // Read the operation choice from user input
    printf("Enter number 2:\n");
    scanf("%lf", &num2); // Read the second number from user input
    // menu(&choice);
    if (choice == '+')
    {
      result = num1 + num2;
      printf("Result: %.2lf\n", result);
    }
    else if (choice == '-')
    {
      result = num1 - num2;
      printf("Result: %.2lf\n", result);
    }
    else if (choice == '*')
    {
      result = num1 * num2;
      printf("Result: %.2lf\n", result);
    }
    else if (choice == '/')
    {
      if (num2 == 0)
      {
        printf("Error: Division by zero!\n");
      }
      else
      {
        result = num1 / num2;
        printf("Result: %.2lf\n", result);
      }
    }
    else if (choice == '%')
    {
      if ((int)num2 == 0)
      {
        printf("Error: Division by zero!\n");
      }
      else
      {
        printf("Result: %d\n", (int)num1 % (int)num2);
      }
    }
    else if (choice == '^')
    {
      printf("Enter base and exponent: ");
      scanf("%lf %lf", &num1, &num2);
      result = pow(num1, num2);
      printf("Result: %.2lf\n", result);
    }
    else if (choice == '7')
    {
      printf("Enter a number: ");
      scanf("%lf", &num1);
      if (num1 < 0)
      {
        printf("Error: Negative input for square root!\n");
      }
      else
      {
        result = sqrt(num1);
        printf("Result: %.2lf\n", result);
      }
    }
    else
    {
      printf("Invalid choice. Try again.\n");
    }
    if (isTrue == true)
    {
      printf("Do you want to continue? (y/n): ");
      char cont;
      scanf(" %c", &cont);
      if (cont == 'n' || cont == 'N')
      {
        printf("Exiting the calculator. Goodbye!\n");
        isTrue = false; // Exit the loop if user does not want to continue
      }
      else if (cont == 'y' || cont == 'Y')
      {
        isTrue = true; // Continue the loop if user wants to continue
      }
      else
      {
        printf("Invalid input. Exiting the calculator.\n");
        isTrue = false; // Exit the loop for invalid input
      }
    }
  };
}