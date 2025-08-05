#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef char* string;
    
int main () {
    string str1 = "Hello,";
    string str2 = "World!";
    string str3 = "Hello, World!";

    printf("str1 and str2: %s %s\n", str1, str2);
    printf("str3: %s\n", str3);
    
    return 0;
}