#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void to_lowercase(char arr[])
{
  int len = strlen(arr);
  for (int i = 0; i < len; i++)
  {
    if (arr[i] < 97)
    {
      arr[i] += 32;
    }
  }
}

void to_uppercase(char *arr)
{
  int len = strlen(arr);
  for (int i = 0; i < len; i++)
  {
    if (*(arr + i) >= 97)
    {
      *(arr + i) -= 32;
    }
  }
}

int main()
{
  printf("Welcome the to world of Guessing Numbers.\n");
  srand(time(NULL));
  int random_no = (rand() % 100) + 1;
  // printf("random number: %d\n", random_no);
  int guess;
  int temp = 0;
  char confirmation[10];
  int is_true;
  do
  {
    // printf("random number: %d\n", random_no);
    printf("guess a number between(1 to 100): ");
    scanf("%d", &guess);
    temp++;
    if (guess > random_no)
    {
      printf("guess less number\n");
    }
    else if (guess < random_no)
    {
      printf("guess large number\n");
    }
    else
    {
      printf("Congratulations You have successfully guessed the Number in %d attempts\n", temp);
    }
    if (guess == random_no)
    {
      printf("do you want to play again: ");
      scanf("%s", confirmation);
      to_lowercase(confirmation);
      if (strcmp(confirmation, "no") == 0 || strcmp(confirmation, "n") == 0)
      {
        is_true = 0;
      }
      else if (strcmp(confirmation, "yes") == 0 || strcmp(confirmation, "y") == 0)
      {
        is_true = 1;
        temp = 0;
        random_no = (rand() % 100) + 1;
      }
    }
  } while (is_true != 0);

  printf("..........................................\n");
  printf("thanks for playing.\n");
  printf("develop by sayed mahmood seddiqui.\n");

  return 0;
}

// while (true)
  // {
  //   printf("guess a number between(1 to 100): ");
  //   scanf("%d", &guess);
  //   temp++;
  //   if (guess > random_no)
  //   {
  //     printf("guess less number\n");
  //   }
  //   else if (guess < random_no){
  //     printf("guess large number\n");
  //   }
  //   else{
  //     printf("Congratulations You have successfully guessed the Number in %d attempts\n", temp);
  //     break;
  //   }
  // }

// char confirmation[10];
// printf("do you want to play again: ");
// scanf("%s", confirmation);
// to_lowercase(confirmation);
// printf("lowercase: %s", confirmation);
// to_uppercase(confirmation);
// printf("uppercase: %s", confirmation);
// printf("a: %d\n", 'a');
// printf("A: %d\n", 'A');