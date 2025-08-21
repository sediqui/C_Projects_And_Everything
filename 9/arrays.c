#include <stdio.h>
#include <string.h>
  
int main () {
  // int arr[5] = {10, 20, 30, 40, 50};
  // int *ptr = arr; // Pointer to the first element of the array
  // int i;
  // printf("Array elements are:\n");
  // for (i = 0; i < 5; i++) {
  //   printf("%d ", *(ptr + i)); // Accessing elements using pointer arithmetic
  // }
  // printf("\n");
  // printf("Address of the first element: %p\n", (void*)ptr);
  // printf("Address of the second element: %p\n", (void*)(ptr + 1));
  // printf("Address of the third element: %p\n", (void*)(ptr + 2));
  // printf("Address of the fourth element: %p\n", (void*)(ptr + 3));
  // printf("Address of the fifth element: %p\n", (void*)(ptr + 4));
  // printf("Size of the array: %zu bytes\n", sizeof(arr));
  // printf("Size of an element: %zu bytes\n", sizeof(arr[0]));
  // printf("Number of elements in the array: %zu\n", sizeof(arr) / sizeof(arr[0]));
  // printf("Pointer size: %zu bytes\n", sizeof(ptr));
  // printf("Pointer to the array: %p\n", (void*)ptr);
  // printf("Pointer to the first element: %p\n", (void*)&arr[0]);
  // printf("Pointer to the second element: %p\n", (void*)&arr[1]);
  // printf("Pointer to the third element: %p\n", (void*)&arr[2]);
  // printf("Pointer to the fourth element: %p\n", (void*)&arr[3]);
  // printf("Pointer to the fifth element: %p\n", (void*)&arr[4]);
  // printf("Pointer arithmetic example:\n");
  // for (i = 0; i < 5; i++) {
  //   printf("Element %d: %d, Address: %p\n", i + 1, *(ptr + i), (void*)(ptr + i));
  // }
  // printf("End of program.\n");



  // char* name = "John Doe";

  // for (int i = 0; i < 8; i++) {
  //   printf("%c \n", name[i]);
  //   printf("pointer of this array is: %p\n", &name[i]);
  // }
    // printf("\n");
  // char arr[2][5] = { {'H', 'e', 'l', 'l', 'o'}, {'W', 'o', 'r', 'l', 'd'} };
  // printf("Array elements are:\n");
  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 5; j++) {
  //     printf("%c ", arr[i][j]);
  //   }
  //   printf("\n");
  // }
  // printf("Address of the first element: %p\n", (void*)&arr[0][0]);
  // printf("Address of the second element: %p\n", (void*)&arr[0][1]);
  // printf("Address of the third element: %p\n", (void*)&arr[0][2]);
  // printf("Address of the fourth element: %p\n", (void*)&arr[0][3]);
  // printf("Address of the fifth element: %p\n", (void*)&arr[0][4]);
  // printf("Size of the array: %zu bytes\n", sizeof(arr));


  int arr[2][2][3][4] = {
    {
      { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} },
      { {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24} }
    },
    {
      { {25, 26, 27, 28}, {29, 30, 31, 32}, {33, 34, 35, 36} },
      { {37, 38, 39, 40}, {41, 42, 43, 44}, {45, 46, 47, 48} }
    }
  };

  printf("Array elements are:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 4; l++) {
          printf("%d ", arr[i][j][k][l]);
        }
        printf("\n");
      }
      printf("\n");
    }
  }

  for (int q = 0; q < 2; q++) {
    for (int w = 0; w < 2; w++) {
      for (int e = 0; e < 3; e++) {
        for (int r = 0; r < 4; r++) {
          printf("Address of the first element: %d\n", arr[q][w][e][r]);
          // printf("Address of the second element: %p\n", &arr[q][w][e][r + 1]);
          // printf("Address of the third element: %p\n", &arr[q][w][e][r + 2]);
          // printf("Address of the fourth element: %p\n", &arr[q][w][e][r + 3]);
          // printf("Address of the fifth element: %p\n", &arr[q][w][e][r + 4]);
          // printf("Size of the array: %zu bytes\n", sizeof(arr));
        }
        printf("\n");
      }
      printf("\n");
    }
  }
  

  return 0;
}