#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// implement a trim function that removes leading and trailing space from a string.
char *trim(char *str)
{
  char *end;

  // Skip leading spaces
  while (*str == ' ')
    str++;

  if (*str == '\0')
    return str; // string was all spaces

  // Find end
  end = str + strlen(str) - 1;
  while (end > str && *end == ' ')
    end--;

  // Write new null terminator
  *(end + 1) = '\0';

  return str;
}

int main()
{
  // char input[50];
  // printf("Enter a string: ");
  // fgets(input, sizeof(input), stdin);
  // char *newline = strchr(input, '\n');
  // if (newline) {
  //   *newline = '\0'; // Remove the newline character
  // }
  // // Print the input string
  // puts("You entered:");
  // puts(input);

  // use printf with format specifiers to format and print a date string (day, month, year).
  // char day[3], month[3], year[5];
  // printf("Enter day (DD): ");
  // scanf("%2s", day);
  // printf("Enter month (MM): ");
  // scanf("%2s", month);
  // printf("Enter year (YYYY): ");
  // scanf("%4s", year);
  // printf("Formatted Date: %s/%s/%s\n", day, month, year);
  // use printf with format specifiers to format and print a time string (hour, minute, second).
  // char hour[3], minute[3], second[3];
  // printf("Enter hour (HH): ");
  // scanf("%2s", hour);
  // printf("Enter minute (MM): ");
  // scanf("%2s", minute);
  // printf("Enter second (SS): ");
  // scanf("%2s", second);
  // printf("Formatted Time: %s:%s:%s\n", hour, minute, second);

  // write a program to convert a input string to uppercase and lowercase.
  // char str[50];
  // printf("Enter a string: ");
  // fgets(str, sizeof(str), stdin);
  // char *newline = strchr(str, '\n');
  // if (newline) {
  //     *newline = '\0'; // Remove the newline character
  // }
  // for (int i = 0; str[i]; i++) {
  //     if (str[i] >= 'a' && str[i] <= 'z') {
  //         str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
  //     }
  // }
  // printf("Uppercase: %s\n", str);
  // for (int i = 0; str[i]; i++) {
  //     if (str[i] >= 'A' && str[i] <= 'Z') {
  //         str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
  //     }
  // }
  // printf("Lowercase: %s\n", str);
  // // write a program to reverse a string.
  // char reverse[50];
  // int len = strlen(str);
  // for (int i = 0; i < len; i++) {
  //     reverse[i] = str[len - i - 1]; // Reverse the string
  // }
  // reverse[len] = '\0'; // Null-terminate the reversed string
  // printf("Reversed String: %s\n", reverse);
  // // write a program to check if a string is a palindrome.
  // bool isPalindrome = true;
  // for (int i = 0; i < len / 2; i++) {
  //     if (str[i] != str[len - i - 1]) {
  //         isPalindrome = false; // Not a palindrome
  //         break;
  //     }
  // }
  // if (isPalindrome) {
  //     printf("The string is a palindrome.\n");
  // } else {
  //     printf("The string is not a palindrome.\n");
  // }

  // create a simple text-based user login system that compares a stored password  string using strcmp.
  // char storedPassword[] = "password123";
  // char inputPassword[50];
  // printf("Enter your password: ");
  // fgets(inputPassword, sizeof(inputPassword), stdin);
  // char *newline = strchr(inputPassword, '\n');
  // if (newline) {
  //     *newline = '\0'; // Remove the newline character
  // }
  // if (strcmp(inputPassword, storedPassword) == 0) {
  //     printf("Login successful!\n");
  // } else {
  //     printf("Login failed. Incorrect password.\n");
  // }

  // use a 2-d character array to store and display a tic-tac-toe board.
  // char board[3][3] = {
  //     {' ', ' ', ' '},
  //     {' ', ' ', ' '},
  //     {' ', ' ', ' '}
  // };
  // int row, col;
  // char player = 'X';
  // for (int turn = 0; turn < 9; turn++) {
  //   printf("Current board:\n");
  //   for (int i = 0; i < 3; i++) {
  //       for (int j = 0; j < 3; j++) {
  //           printf("%c ", board[i][j]);
  //       }
  //       printf("\n");
  //   }
  //   printf("Player %c, enter your move (row and column): ", player);
  //   scanf("%d %d", &row, &col);
  //   if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
  //       printf("Invalid move. Try again.\n");
  //       turn--; // Repeat the turn
  //       continue;
  //   }
  //   board[row][col] = player;
  //   player = (player == 'X') ? 'O' : 'X'; // Switch players
  // }

  // printf("Final board:\n");
  // for (int i = 0; i < 3; i++) {
  //     for (int j = 0; j < 3; j++) {
  //         printf("%c ", board[i][j]);
  //     }
  //     printf("\n");
  // }
  // puts("Game over!");

  // reverse a string.

  // char arr[50];
  // printf("Enter a string: ");
  // fgets(arr, sizeof(arr), stdin);
  // char *newline = strchr(arr, '\n');
  // if (newline) {
  //     *newline = '\0'; // Remove the newline character
  // }

  // int len = strlen(arr);
  // char reversed[50];
  // for (int i = 0; i < len; i++) {
  //     reversed[i] = arr[len - i - 1]; // Reverse the string
  // }
  // reversed[len] = '\0'; // Null-terminate the reversed string
  // printf("Reversed String: %s\n", reversed);

  // // implement a trim function that removes leading and trailing space from a string.
  // char str[50];
  // printf("Enter a string with leading and trailing spaces: ");
  // fgets(str, sizeof(str), stdin);
  // char *newline = strchr(str, '\n');
  // if (newline)
  // {
  //   *newline = '\0'; // Remove the newline character
  // }
  // // Trim leading spaces
  // char *start = str;
  // while (*start == ' ')
  // {
  //   start++;
  // }
  // // Trim trailing spaces
  // char *end = str + strlen(str) - 1;
  // while (end > start && *end == ' ')
  // {
  //   end--;
  // }
  // end[1] = '\0'; // Null-terminate the trimmed string
  // printf("Trimmed String: '%s'\n", start);

  // implement a trim function that removes leading and trailing space from a string.
  // char str[50];
  // printf("Enter a string with leading and trailing spaces: ");
  // fgets(str, sizeof(str), stdin);
  // char *newline = strchr(str, '\n');
  // if (newline)
  // {
  //   *newline = '\0'; // Remove the newline character
  // }
  // char *trimmed = trim(str);
  // printf("Trimmed String: '%s'\n", trimmed);

  // char str[50];
  // printf("enter a password: ");
  // fgets(str, sizeof(str), stdin);
  // char *newline = strchr(str, '\n');
  // if (newline)
  // {
  //   *newline = '\0'; // Remove the newline character
  // }

  // char *password = "password123";
  // do  
  // {
  //   if (strcmp(str, password) == 0)
  //   {
  //     printf("Login successful!\n");
  //     break;
  //   }
  //   else
  //   {
  //     printf("Login failed. Incorrect password. Try again: ");
  //     fgets(str, sizeof(str), stdin);
  //     newline = strchr(str, '\n');
  //     if (newline)
  //     {
  //       *newline = '\0'; // Remove the newline character
  //     }
  //   }
  // } while (strcmp(str, password) != 0);
  // printf("You entered: %s\n", str);

  // create a program usig break to read inputs from the user in a loop and break the loop if specific keyword (like "exit") is entered.
  char input[50];
  while (true)
  {
    printf("Enter a string (type 'exit' to quit): ");
    fgets(input, sizeof(input), stdin);
    char *newline = strchr(input, '\n');
    if (newline)
    {
      *newline = '\0'; // Remove the newline character
    }
    if (strcmp(input, "exit") == 0)
    {
      break; // Exit the loop if "exit" is entered
    }
    puts("You entered:");
    puts(input);
  }

  return 0;
}