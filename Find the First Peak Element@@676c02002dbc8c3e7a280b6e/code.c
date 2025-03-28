#include<stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    // Handle edge case for size 0
    if (size <= 0) {
        printf("Invalid array size\n");
        return 0;
    }

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables
    int max = arr[0];
    int allEqual = 1; // Flag to check if all elements are equal

    // Find maximum and check if all elements are equal
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] != arr[0]) {
            allEqual = 0; // Not all elements are equal
        }
    }

    // Output the result
    if (allEqual) {
        printf("-1\n"); // All elements are the same
    } else {
        printf("%d\n", max); // Otherwise, output the maximum value
    }

    return 0;
}