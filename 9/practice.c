#include <stdio.h>

// write a function that uses pointer arithmetic to copy an array of char into another.
// void copyArray(char *source, char *destination, int size) {
//     for (int i = 0; i < size; i++) {
//         // destination[i] = source[i];
//         *(destination + i) = *(source + i);
//     }
// }
  
int main () {
  // create a program to find the sum and average of all elements in an array.
  // int arr[5] = {10, 20, 30, 40, 50};
  // int sum = 0;
  // int average;

  // for (int i = 0; i < 5; i++) {
  //   sum += arr[i];
  // }

  // average = sum / 5;
  // printf("Sum of array elements: %d\n", sum);
  // printf("Average of array elements: %d\n", average);


  // create a program to find number of occurrences of an element in an array.
  // int arr[5] = {10, 20, 30, 20, 50};
  // int element = 20;
  // int count = 0;
  // for (int i = 0; i < 5; i++) {
  //   if (arr[i] == element) {
  //     count++;
  //   }
  // }
  // printf("Element %d occurs %d times in the array.\n", element, count);

  // create a program to find the maximum and minimum elements in an array.
  // int arr[5] = {10, 20, 30, 40, 50};
  // int max = arr[0];
  // int min = arr[0];
  // for (int i = 1; i < 5; i++) {
  //   if (arr[i] > max) {
  //     max = arr[i];
  //   }
  //   if (arr[i] < min) {
  //     min = arr[i];
  //   }
  // }
  // printf("Maximum element in the array: %d\n", max);
  // printf("Minimum element in the array: %d\n", min);

  // create a program to check if the given array is sorted or not.
  // int arr[5] = {10, 20, 30, 40, 50};
  // int isSorted = 1; // Assume the array is sorted
  // for (int i = 0; i < 4; i++) {
  //   if (arr[i] > arr[i + 1]) {
  //     isSorted = 0; // Found an element that is greater than the next one
  //     break;
  //   }
  // }

  // if (isSorted) {
  //   printf("The array is sorted.\n");
  // } else {
  //   printf("The array is not sorted.\n");
  // }
  // create a program to reverse an array.
  // int arr[5] = {10, 20, 30, 40, 50};
  // int start = 0;
  // int end = 4; // Last index of the array
  // while (start < end) {
  //   int temp = arr[start];
  //   arr[start] = arr[end];
  //   arr[end] = temp;
  //   start++;
  //   end--;
  // }
  // printf("Reversed array: ");
  // for (int i = 0; i < 5; i++) {
  //   printf("%d ", arr[i]);
  // }
  // printf("\n");


  // create a program to sort an array.
  // int arr[5] = {50, 20, 30, 10, 40};
  // int n = 5;
  // for (int i = 0; i < n - 1; i++) {
  //   for (int j = 0; j < n - i - 1; j++) {
  //     if (arr[j] > arr[j + 1]) {
  //       // Swap arr[j] and arr[j + 1]
  //       int temp = arr[j];
  //       arr[j] = arr[j + 1];
  //       arr[j + 1] = temp;
  //       printf("Swapped %d and %d\n", arr[j], arr[j + 1]);
  //     }
  //     printf("Current array state: ");
  //     for (int k = 0; k < n; k++) {
  //       printf("%d ", arr[k]);
  //     }
  //     printf("\n");
  //   }
  // }
  // printf("Sorted array: ");
  // for (int i = 0; i < n; i++) {
  //   printf("%d ", arr[i]);
  // }
  // printf("\n");

  // create a program to return a new array deleting a specific element.
  // int arr[5] = {10, 20, 30, 40, 50};
  // int elementToDelete = 30;
  // int newArr[4]; // New array to hold elements after deletion
  // int j = 0;
  // for (int i = 0; i < 5; i++) {
  //   if (arr[i] != elementToDelete) {
  //     newArr[j] = arr[i];
  //     j++;
  //   }
  // }
  // printf("Array after deleting %d: ", elementToDelete);
  // for (int i = 0; i < j; i++) {
  //   printf("%d ", newArr[i]);
  // }
  // printf("\n");

  // create a program to reverse an arrays.
  // int arr[5] = {10, 20, 30, 40, 50};
  // for(int i = 5; i > 0; i--) {
  //   printf("%d ", arr[i - 1]);
  // }

  // create a program to check is the array is palindrome or not.
  // int arr[5] = {10, 20, 30, 20, 10};
  // int isPalindrome = 1; // Assume the array is a palindrome
  // int n = 5; // Length of the array
  // for (int i = 0; i < n / 2; i++) {
  //   if (arr[i] != arr[n - i - 1]) {
  //     isPalindrome = 0; // Found a mismatch
  //     break;
  //   }
  // }
  // if (isPalindrome) {
  //   printf("The array is a palindrome.\n");
  // } else {
  //   printf("The array is not a palindrome.\n");
  // }



  // write a function that uses pointer arithmetic to copy an array of char into another.
  // char source[] = "Hello, World!";
  // char destination[50];
  // int size = sizeof(source) / sizeof(source[0]) - 1; // Exclude null terminator
  // copyArray(source, destination, size);
  // destination[size] = '\0'; // Null-terminate the destination string
  // printf("Copied array: %s\n", destination);
  // printf("Size of destination array: %d\n", sizeof(destination));

  // create a program to merge two sorted arrays.
  // int arr1[] = {1, 3, 5, 7};
  // int arr2[] = {2, 4, 6, 8};
  // int size1 = sizeof(arr1) / sizeof(arr1[0]);
  // int size2 = sizeof(arr2) / sizeof(arr2[0]);
  // int merged[size1 + size2];
  // int i = 0, j = 0, k = 0;
  // while (i < size1 && j < size2) {
  //   if (arr1[i] < arr2[j]) {
  //     merged[k++] = arr1[i++];
  //   } else {
  //     merged[k++] = arr2[j++];
  //   }
  // }
  // while (i < size1) {
  //   merged[k++] = arr1[i++];
  // }
  // while (j < size2) {
  //   merged[k++] = arr2[j++];
  // }
  // printf("Merged array: ");
  // for (int m = 0; m < size1 + size2; m++)
  //   printf("%d ", merged[m]);
  // printf("\n");

  // create a program to search an element in a 2-d array.
  // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int element = 5;
  // int found = 0;
  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     if (arr[i][j] == element) {
  //       printf("Element %d found at position (%d, %d)\n", element, i, j);
  //       found = 1;
  //       break;
  //     }
  //   }
  //   if (found) break;
  // }

  // create a program to do sum and average of all elements in a 2-d array.
  // int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  // int sum = 0;
  // int count = 0;
  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     sum += arr[i][j];
  //     count++;
  //   }
  // }
  // double average = (double)sum / count;
  // printf("Sum of all elements in the 2D array: %d\n", sum);
  // printf("Average of all elements in the 2D array: %.2f\n", average);


  // create a program to find the sum of two diagonal elements.
  int sum = 0;
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) { // Primary diagonal
        sum += arr[i][j];
      }
      if (i + j == 2) { // Secondary diagonal
        sum += arr[i][j];
      }
    }
  }
  printf("Sum of diagonal elements: %d\n", sum);


  return 0;
}