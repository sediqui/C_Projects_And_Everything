#include <stdio.h>
  
int main () {
  // write a program that asks the user for a filename, attempts to open it, and reports whether the operation was successful or not.
  FILE *text;
  char name[50];
  printf("Enter a name text file: ");
  fgets( name, sizeof(name), stdin );
  text = fopen(name,"w");
  char texts[100];
  printf("Enter a text to enter the file");
  fgets(texts, sizeof(texts), stdin);
  fprintf(text, texts);

  return 0;
}