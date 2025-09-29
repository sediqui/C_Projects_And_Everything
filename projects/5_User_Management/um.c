#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include <conio.h>

#define MAX_USERS 10
#define MAX_SIZE 30

typedef struct
{
  char username[MAX_SIZE];
  char password[MAX_SIZE];
} User;

User users[MAX_USERS];
int user_cout = 0;


void input_password(char *password, int bufsize)
{
    printf("Enter your password: ");
    fflush(stdout);

    int i = 0;
    int ch;

    while ((ch = _getch()) != '\r' && ch != '\n') // Enter pressed
    {
        if (ch == '\b') // handle backspace
        {
            if (i > 0)
            {
                i--;
                printf("\b \b"); // erase *
            }
        }
        else if (i < bufsize - 1 && ch >= 32 && ch <= 126) // printable char
        {
            password[i++] = (char)ch;
            putchar('*');
        }
    }

    password[i] = '\0';
    printf("\n");
}

// void input_password(char *password, int bufsize)
// {
//   // HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
//   // DWORD mode, oldMode;
//   // // Save current console mode
//   // GetConsoleMode(hStdin, &mode);
//   // oldMode = mode;
//   // // Disable echo and line input
//   // mode &= ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT);
//   // printf("Enter you password: ");
//   // SetConsoleMode(hStdin, mode);
//   // int size = sizeof(password);
//   // DWORD read;
//   // ReadConsoleA(hStdin, password, size, &read, NULL);
//   // // scanf(" %s", password);
//   // SetConsoleMode(hStdin, oldMode);
//   HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
//   DWORD mode, oldMode;
//   // Save current console mode
//   GetConsoleMode(hStdin, &mode);
//   oldMode = mode;
//   // Disable echo
//   mode &= ~ENABLE_ECHO_INPUT;
//   SetConsoleMode(hStdin, mode);
//   printf("Enter your password: ");
//   fflush(stdout);
//   DWORD read = 0;
//   if (ReadConsoleA(hStdin, password, bufsize - 1, &read, NULL))
//   {
//     password[read] = '\0'; // null terminate
//     // strip CR/LF
//     char *p = strpbrk(password, "\r\n");
//     if (p)
//       *p = '\0';
//   }
//   // Restore old mode
//   SetConsoleMode(hStdin, oldMode);
//   printf("\n%s\n",password);
// }

int print_option()
{
  int choose;
  printf("1. Register\n");
  printf("2. login\n");
  printf("3. exit\n");
  printf("Select an option: ");
  scanf("%d", &choose);
  return choose;
}

void register_user()
{
  if (user_cout == MAX_USERS)
  {
    printf("Maximum %d users are supported! No more registrations Allowed", MAX_USERS);
    return;
  }
  else
  {
    int new_index = user_cout;
    printf("register a new user\n");
    printf("Enter you username: ");
    scanf(" %s", users[new_index].username);
    input_password(users[new_index].password, MAX_SIZE);
    user_cout++;
    printf("\nregister successfully\n");
  }
}

int login_user()
{
  int new_indexs = -1;
  char usernames[30], passwords[30];
  printf("login here\n");
  printf("Enter you username: ");
  scanf(" %s", usernames);
  input_password(passwords, MAX_SIZE);
  for (int i = 0; i < MAX_USERS; i++)
  {
    if (strcmp(usernames, users[i].username) == 0 && strcmp(passwords, users[i].password) == 0)
    {
      new_indexs = i;
    }
  }
  return new_indexs;
}

int main()
{
  // FILE *User_file = fopen("Users.txt", "a+");
  // if (User_file == NULL)
  // {
  //   printf("Error");
  //   return 1;
  // }
  int option;
  int user_index;

  while (1)
  {
    option = print_option();
    if (option == 3)
    {
      printf("Program Exit.\n");
      break;
    }
    else if (option < 1 || option > 3)
    {
      printf("invalid option. please try again.\n");
      continue;
    }
    switch (option)
    {
    case 1:
      register_user();
      break;
    case 2:
      user_index = login_user();
      if (user_index >= 0)
      {
        printf("\nlogin successfully! Welcome, %s\n", users[user_index].username);
      }
      else
      {
        printf("\nLogin failed! Incorrect username or password.\n");
      }
      break;
    default:
      break;
    }
  }

  return 0;
}