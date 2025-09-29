#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

const int BAR_LENGTH = 100;
const int MAX_TASK = 5;

void clear_screen()
{
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

typedef struct
{
  int id;
  int progress;
  int step;
} Task;

void printbar(Task task)
{
  int bars_to_show = (task.progress * BAR_LENGTH) / 100;
  printf("\nTask %d: [", task.id);
  for (int i = 0; i < BAR_LENGTH; i++)
  {
    if (i < bars_to_show)
    {
      printf("=");
    }
    else
    {
      printf(" ");
    }
  }
  printf("] %d%%", task.progress);
}

int main()
{
  srand(time(NULL));
  Task task[MAX_TASK];
  for (int i = 0; i < MAX_TASK; i++)
  {
    task[i].id = i + 1;
    task[i].progress = 0;
    task[i].step = (rand() % 5) + 1;
  }
  int tasks_incomplete = 1;
  while (tasks_incomplete)
  {
    tasks_incomplete = 0;
    clear_screen();
    for (int i = 0; i < MAX_TASK; i++)
    {
      task[i].progress += task[i].step;
      if (task[i].progress > 100)
      {
        task[i].progress = 100;
      }
      else if (task[i].progress < 100)
      {
        tasks_incomplete = 1;
      }
      printbar(task[i]);
    }
    sleep(.5);
  }
  printf("\nAll task are complete");

  return 0;
}