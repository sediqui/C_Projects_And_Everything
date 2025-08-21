#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef char* string;

// implement a void minmax(int *a, int *b, int *min, int *max) function that takes two integer pointers a and b as input and assigns the smaller value to min and the larger value to max using call by reference. write a main function to test it with different values.

// void minmax(int *a, int *b, int *min, int *max) {
//     if (*a < *b) {
//         *min = *a;
//         *max = *b;
//     } else {
//         *min = *b;
//         *max = *a;
//     }

//     printf("a: %p, b: %p, min: %p, max: %p\n", a, b, min, max);

// }

  
int main () {
  // create a program using pointers and strings.
  // string str1 = "Hello, ";
  // string str2 = "World!";
  // string str3;
  // str3 = malloc(strlen(str1) + strlen(str2) + 1); // +1 for the null terminator
  // if (str3 == NULL) {
  //   fprintf(stderr, "Memory allocation failed\n");
  //   return 1;
  // }
  // strcpy(str3, str1);
  // strcat(str3, str2);
  // printf("%s\n", str3);
  // free(str3); // free the allocated memory
  // str3 = NULL; // set pointer to NULL after freeing
  // // to avoid dangling pointer issues.
  // if (str3 == NULL) {
  //   printf("Pointer is now NULL.\n");
  // } else {
  //   printf("Pointer is not NULL.\n");
  // }
  // // Demonstrating pointer arithmetic
  // char *ptr = str1;
  // while (*ptr != '\0') {
  //   printf("%c ", *ptr);
  //   ptr++;
  // }
  // printf("\n");
  // // Demonstrating string comparison
  // if (strcmp(str1, str2) < 0) {
  //   printf("str1 is less than str2\n");
  // } else if (strcmp(str1, str2) > 0) {
  //   printf("str1 is greater than str2\n");
  // } else {
  //   printf("str1 is equal to str2\n");
  // }
  // // Demonstrating string length
  // printf("Length of str1: %zu\n", strlen(str1));
  // printf("Length of str2: %zu\n", strlen(str2));
  // printf("Length of str3: %zu\n", strlen(str3));


  // write a program that declares an integer variable and a pointer to it. assign a value and print it using the pointer.
  // int value = 23;
  // int *ptr = &value;
  // printf("Value: %d\n", *ptr);
  // printf("Value: %p\n", ptr);
  // printf("Value: %p\n", (void*)ptr);
  // printf("Value: %p\n", &ptr);

  // write a program to change the value of an integer variable using a pointer and the * operator.
  // int num = 42; // Declare an integer variable
  // int *ptr = &num; // Create a pointer to the integer variable
  // printf("Original value: %d\n", *ptr); // Print the original value using the pointer
  // *ptr = 100; // Change the value of the integer variable using the pointer
  // printf("Changed value: %d\n", *ptr); // Print the changed value using the pointer
  // printf("Address of num: %p\n", (void*)&num); // Print the address of the integer variable
  // printf("Address stored in ptr: %p\n", (void*)ptr); // Print the address stored in the pointer
  // printf("Address of ptr: %p\n", (void*)&ptr); // Print the address of the pointer itself
  // printf("Size of integer: %zu bytes\n", sizeof(num)); // Print the size of the integer variable
  // printf("Size of pointer: %zu bytes\n", sizeof(ptr)); // Print the size of the pointer

  // declare a pointer to a char and use it to read and print a character entered by the user.

  // char ch;
  // char *ptr = &ch; // Declare a pointer to a char
  // printf("Enter a character: ");
  // scanf(" %c", ptr); // Read a character using the pointer
  // printf("You entered: %c\n", *ptr); // Print the character using the pointer
  // printf("Address of character: %p\n", (void*)&ch); // Print the address of the character variable
  // printf("Address stored in ptr: %p\n", (void*)ptr); // Print the address stored in the pointer
  // printf("Size of char: %zu bytes\n", sizeof(ch)); // Print the size of the char variable
  // printf("Size of pointer: %zu bytes\n", sizeof(ptr)); // Print the size of the pointer

  // implement a void minmax(int *a, int *b, int *min, int *max) function that takes two integer pointers a and b as input and assigns the smaller value to min and the larger value to max using call by reference. write a main function to test it with different values.

  // int a = 10, b = 20, min, max;
  // minmax(&a, &b, &min, &max);
  // printf("Min: %d, Max: %d\n", min, max);
  // a = 30; b = 15;
  // minmax(&a, &b, &min, &max);
  // printf("Min: %d, Max: %d\n", min, max);
  // a = -5; b = 5;
  // minmax(&a, &b, &min, &max);
  // printf("Min: %d, Max: %d\n", min, max);



  return 0;
}