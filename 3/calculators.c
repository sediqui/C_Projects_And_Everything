#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef char *string;
const int MAX_SIZE = 100;

int main()
{
  //// calculate of (+-/*)
  // float a, b;
  // char op;
  // printf("Enter first number: ");
  // scanf("%f", &a);
  // printf("Enter operator (+, -, *, /): ");
  // scanf(" %c", &op);
  // printf("Enter second number: ");
  // scanf("%f", &b);
  // float result;
  // if(op == '+') {
  //   result = a + b;
  // } else if(op == '-') {
  //   result = a - b;
  // } else if(op == '*') {
  //   result = a * b;
  // } else if(op == '/') {
  //   if(b != 0) {
  //     result = a / b;
  //   } else {
  //     printf("Error: Division by zero.\n");
  //     return 1;
  //   }
  // } else {
  //   printf("Error: Invalid operator.\n");
  //   return 1;
  // }
  // printf("Result of %f %c %f = %.2f\n", a, op, b, result);

  //// calculate of product of two floats numbers
  // int a = 10;
  // printf("The value of a is: f:%.2f and d:%d \n", (float)a, a);

  // float a = 10.3f;
  // float b = 20.7f;
  // float result = a * b;
  // printf("The result of %.2f * %.2f is: %.2f\n", a, b, result);

  //// calculate of (perimeter of rectangle)
  // double length, width, perimeter;

  //   printf("Length: ");
  //   scanf("%lf", &length);

  //   printf("Width: ");
  //   scanf("%lf", &width);

  //   perimeter = 2 * (length + width);

  //   printf("Perimeter: %.2lf\n", perimeter);

  //// calculate of (area of triangle)
  // double base, height, area;

  //   printf("Base: ");
  //   scanf("%lf", &base);

  //   printf("Height: ");
  //   scanf("%lf", &height);

  //   // area = 0.5 * base * height;
  //   area = (base * height) / 2;

  //   printf("Area: %.2lf\n", area);

  // double p,t,r,result;
  // printf("Enter principal amount (p): ");
  // scanf("%lf", &p);
  // printf("Enter time in years (t): ");
  // scanf("%lf", &t);
  // printf("Enter rate of interest (r): ");
  // scanf("%lf", &r);
  // // simple interest formula: SI = (p * t * r) / 100
  // // but we will use MAX_SIZE to avoid division by 100
  // // result = (p * t * r) / MAX_SIZE;
  // // but we will use MAX_SIZE to avoid division by 100
  // result = p * (1 * r / MAX_SIZE) * t;
  // printf("Simple Interest: %.2lf\n", result);

  // // Compound interest formula: CI = p * (1 + r/100)^t
  // double principal, rate, time, compFreq, amount, ci;

  // printf("Principal: ");
  // scanf("%lf", &principal);

  // printf("Annual Interest Rate (%%): ");
  // scanf("%lf", &rate);

  // printf("Time (years): ");
  // scanf("%lf", &time);

  // printf("Compounds per year: ");
  // scanf("%lf", &compFreq);

  // amount = principal * pow((1 + (rate / 100) / compFreq), compFreq * time);
  // ci = amount - principal;

  // printf("Compound Interest: %.2lf\n", ci);
  // printf("Total Amount: %.2lf\n", amount);

  // convert fahrenheit to celsius
  // double fahrenheit, celsius;
  // printf("Enter temperature in Fahrenheit: ");
  // scanf("%lf", &fahrenheit);
  // celsius = (fahrenheit - 32) * 5 / 9;
  // printf("Temperature in Celsius: %.2lf\n", celsius);

  // convert celsius to fahrenheit
  double celsius, fahrenheit;
  printf("Enter temperature in Celsius: ");
  scanf("%lf", &celsius);
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("Temperature in Fahrenheit: %.2lf\n", fahrenheit);

  return 0;
}