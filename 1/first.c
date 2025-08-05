#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef char* string;
    
int main () {
    string str1 = "Hello, ";
    string str2 = "World!";
    string str3 = "Hello, World!";

    printf("str1: %s\n", str1);
    printf("str2 yes: %s\n", str2);
    printf("str3 are the best: %s\n", str3);
    
    return 0;
}