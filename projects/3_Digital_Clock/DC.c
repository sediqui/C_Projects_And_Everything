#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>

void get_time(char *buffer, int size, int format)
{
  time_t rawtime;
  struct tm *current_time;
  time(&rawtime);
  current_time = localtime(&rawtime);
  if (format == 1)
  {
    strftime(buffer, size, "%H:%M:%S", current_time);
  }
  else
  {
    strftime(buffer, size, "%I:%M:%S %p", current_time);
  }
}

void get_date(char *buffer, int size)
{
  time_t rawtime;
  struct tm *current_time;
  time(&rawtime);
  current_time = localtime(&rawtime);
  strftime(buffer, size, "%A %B %d %Y", current_time);
}

int input_format(){
  int choose;
  printf("Choose the time format: \n");
  printf("1. 24 Hour format\n");
  printf("2. 12 Hour format (default)\n");
  printf("Make a choice(1/2): ");
  scanf("%d", &choose);
  return choose;
}

void clear_screen() {
  #ifdef _WIN32
  system("cls");
  #else
  system("clear");
  #endif
}

int main()
{
  // time_t rawtime;
  // struct tm *current_time;
  // char buffer[50];
  // time(&rawtime);
  // current_time = localtime(&rawtime);
  // strftime(buffer, sizeof(buffer), "%I:%M:%S %p", current_time);
  // printf("Current Time: %s", buffer);
  char times[50], dates[100];
  int sizes = sizeof(times);
  int siz = sizeof(dates);
  int format = input_format();
  while (1)
  {
    get_time(times, sizes, format);
    get_date(dates, siz);
    clear_screen();
    printf("Current time: %s\n", times);
    printf("date: %s\n", dates);
    sleep(1);
  }
  

  return 0;
}