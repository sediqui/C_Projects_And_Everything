#include <stdio.h>

int main () {
  double num1, num2, result;
  char op;
  printf("Enter num1: ");
  scanf("%lf", &num1);
  printf("Enter an operator: ");
  scanf(" %c", &op);
  printf("Enter num2: ");
  scanf("%lf", &num2);
  if (op == '+')
  {
    result = num1 + num2;
    printf("%.2lf %c %.2lf = %.2lf", num1, op, num2, result);
  }
  else if (op == '-') {
    result = num1 - num2;
    printf("%.2lf %c %.2lf = %.2lf", num1, op, num2, result);
  }
  else if (op == '*') {
    result = num1 * num2;
    printf("%.2lf %c %.2lf = %.2lf", num1, op, num2, result);
  }
  else if (op == '/') {
    result = num1 / num2;
    printf("%.2lf %c %.2lf = %.2lf", num1, op, num2, result);
  }
  else {
    printf("invalid operator");
  }
  
  
  return 0;
}