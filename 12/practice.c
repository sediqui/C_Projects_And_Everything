#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define the Car structure
// typedef struct {
//     char brand[30];
//     char model[30];
//     int year;
// } Car;

// typedef struct point
// {
//   float x, y;
// } point;


int main() {
    // Dynamically allocate memory for one Car
    // int n;
    // printf("Enter number of cars: ");
    // scanf("%d", &n);
    // Car *c = (Car*) malloc(n * sizeof(Car));
    // if (c == NULL) {
    //     printf("Memory allocation failed!\n");
    //     return 1;
    // }

    // // Assign values
    // for(int i = 0; i < n; i++){
    //   printf("Brand: ");
    //   scanf("%s", c[i].brand);
    //   printf("Model: ");
    //   scanf("%s", c[i].model);
    //   printf("Year: ");
    //   scanf("%d", &c[i].year);
    // }

    // // Print values
    // for(int i = 0; i < n; i++){
    //   printf("Car: %s %s (%d)\n", c[i].brand, c[i].model, c[i].year);
    // }

    // // Free allocated memory
    // free(c);


    // create a progarm that uses malloc to dynamically allocate an array for a specified number of float value entered by the user and then stores user-entered numbers into it.
    // int n;
    // printf("Enter number of float values: ");
    // scanf("%d", &n);

    // float *arr = (float*) malloc(n * sizeof(float));

    // if (arr == NULL){
    //   printf("memory alocation failed\n");
    //   return 1;
    // }

    // for (int i = 0; i < n; i++){
    //   printf("Enter value %d: ", i + 1);
    //   scanf("%f", &arr[i]);
    // }

    // for(int j = 0; j < n; j++){
    //   printf("value of floats: %.2f\n", arr[j]);
    // }

    // free(arr);

    // use calloc to allocate an array for a set of char characters representing a sentence, ensuring all the memory is initialized to zero.
    // int size;
    // printf("Enter max sentence length: ");
    // scanf("%d", &size);
    // getchar();

    // char *arr = (char*) calloc(size, sizeof(char));
    // if(arr == NULL)
    // {
    //   printf("memory allocation failed");
    //   return 1;
    // }

    // printf("Enter a sentence: ");
    // fgets(arr, size, stdin);


    // // for(int i = 0; i < 4; i++){
    // //   printf("%c", arr[i]);
    // // }

    // printf("your entered: %s", arr);

    // free(arr);

    // allocate memory for a struct representing a point with x and y coordinates, set some values, and then properly deallocate the memory using free.

    // point *p = (point*)malloc(sizeof(point));
    // if (p == NULL)
    // {
    //   printf("memory allocation is failed");
    //   return 1;
    // }

    // p->x = 2.5;
    // p->y = 3.6;

    // printf("x and y values: %.2f and %.2f", p->x, p->x);

    // free(p);


    // Create an array using calloc and fill it with random numbers,then use realloc to shrink the array size by half and print the remaining numbers.
    // int n = 10;   // initial size
    // int *arr;

    // // allocate with calloc
    // arr = (int *)calloc(n, sizeof(int));
    // if (!arr) {
    //     printf("Memory allocation failed\n");
    //     return 1;
    // }

    // // seed random
    // srand(time(NULL));

    // // fill with random numbers
    // for (int i = 0; i < n; i++) {
    //     arr[i] = rand() % 100; // numbers 0–99
    // }

    // printf("Original array:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    // // shrink array size by half
    // n /= 2;
    // arr = (int *)realloc(arr, n * sizeof(int));
    // if (!arr) {
    //     printf("Reallocation failed\n");
    //     return 1;
    // }

    // printf("Shrunk array:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    // free(arr);

    return 0;
}
