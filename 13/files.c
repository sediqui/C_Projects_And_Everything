#include <stdio.h>
#include <stdlib.h>

int main () {
  FILE *file;
  char str[1024];

  file = fopen("first.text", "r");
  if (file == NULL){
    printf("file not open");
    return 1;
  }

  fgets(str, sizeof(str), file);


  printf("File contents: %s", str);

  fclose(file);

  return 0;
}