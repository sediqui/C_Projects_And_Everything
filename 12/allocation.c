#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(sizeof(int) * n);

    if (arr == NULL) {   // FIXED: use == not =
        printf("Memory allocation failed.\n");
        return 1;
    }

    long sum = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++) {
        sum += arr[j];
    }

    printf("The sum of all elements: %ld\n", sum); // FIXED: use %ld for long

    free(arr); // always free malloc’d memory
    return 0;
}
