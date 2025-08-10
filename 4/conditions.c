#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* string;
  
int main (int argc,string argv[]) {
  int i;
  bool found = false;
  string needle;
  needle = (string)malloc(2 * sizeof(char)); // Allocate memory for needle
  printf("%s",needle);
  if (needle == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  printf("Enter the needle: ");
  scanf("%s", needle); // Read needle from input
  string haystack[] = {"hay", "needle", "stack"};

  for (i = 0; i < sizeof(haystack) / sizeof(haystack[0]); i++) {
    if (strcmp(haystack[i], needle) == 0) {
      found = true;
      break;
    }
  }
  if (found) {
    printf("Found the needle at index %d\n", i);
  } else {
    printf("Needle not found\n");
  }
  printf("Size of haystack: %zu\n", sizeof(haystack) / sizeof(haystack[0]));
  printf("Size of haystack in bytes: %zu\n", sizeof(haystack));
  return 0;
}