#include <stdio.h>

typedef struct {
  int num1;
  int num2;
} Numbers;

int main () {
  // Numbers numbers;
  // printf("Enter two numbers:\n");
  // scanf("%d %d", &numbers.num1, &numbers.num2);
  // int sum = numbers.num1 + numbers.num2;
  // printf("Sum: %d\n", sum);
  // register int i;
  // register int j = 11;
  // for (i = 1; i <= j; i++) {
  //   printf("multiplication of %d x %d = %d\n", i, j, i * j);
  // }


  // create a program that converts a large number of kilometers to miles, using long or long long to store the distance.
  // long long kilometers;
  // printf("Enter distance in kilometers:\n");
  // scanf("%lld", &kilometers);
  // double miles = kilometers * 0.621371; // Conversion factor from kilometers to miles
  // printf("Distance in miles: %.2lf\n", miles);


  // write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20.
  // long result = 1L;
  // long long results = 1LL;
  // int factorial;
  // printf("Enter a number to calculate its factorial:\n");
  // scanf("%d", &factorial);
  // if (factorial < 0) {
  //   printf("Factorial is not defined for negative numbers.\n");
  //   return 1;
  // }
  // if (factorial > 1){
  //   for(int i = 1; i <= factorial; i++) {
  //     result *= i;
  //     results *= i;
  //   }
  // } else if (factorial == 0 || factorial == 1) {
  //   result = 1;
  //   results = 1;
  // } else {
  //   printf("Invalid input.\n");
  //   return 1;
  // }

  // // printf("Factorial of %d is: %ld\n", factorial, result);
  // // printf("Factorial of %d is: %ld\n", factorial, results);
  // printf("long factorial of %d is: %ld\n", factorial, result);
  // printf("long long factorial of %d is: %lld\n", factorial, results);


  // write a c program that initializes an unsigned int to its maximum possible value and an int to a negative number. add 1 to both, and print the results to show how the unsigned int wraps around to 0, whereas the int remains negative due to overflow.
  unsigned int maxUnsignedInt = 0xFFFFFFFF; // Maximum value for unsigned int
  int negativeInt = -1; // Negative number
  maxUnsignedInt += 1; // Incrementing unsigned int
  negativeInt += 1; // Incrementing negative int
  printf("Unsigned int after increment: %u\n", maxUnsignedInt); // Should wrap around to 0
  printf("Negative int after increment: %d\n", negativeInt); // Should remain negative 

  
  return 0;
}