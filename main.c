#include <stdio.h>
#define SIZE 100

int main(void) {
    // Write a program in C to copy the elements of one array into another array.

    int n;
    int arr1[SIZE];
    int arr2[SIZE];
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array: ", n);

    for (int i = 0; i < n; ++i) {
        printf("\nElement - %d: ", i);
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; ++i) {
        arr2[i] = arr1[i];
    }

    printf("The elements stored in the first array are: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr1[i]);
    }



    printf("\nThe elements stored in the second array are: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
