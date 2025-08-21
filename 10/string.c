#include <stdbool.h>
#include <stdio.h>
#include <string.h>
  
int main () {
    // char str1[20] = "Hello";
    // char str2[20] = "World";
    
    // // Concatenate str2 to str1
    // strcat(str1, " ");
    // strcat(str1, str2);
    
    // // Print the concatenated string
    // printf("Concatenated String: %s\n", str1);
    
    // // Check if str1 starts with "Hello"
    // if (strncmp(str1, "Hello", 5) == 0) {
    //     printf("The string starts with 'Hello'.\n");
    // } else {
    //     printf("The string does not start with 'Hello'.\n");
    // }

    // fgets and puts example
    char input[50];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    char *newline = strchr(input, '\n');
    if (newline) {
        *newline = '\0'; // Remove the newline character
    }
    // Print the input string
    puts("You entered:");
    puts(input);

  

  return 0;
}