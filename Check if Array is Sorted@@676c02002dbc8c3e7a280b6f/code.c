#include <stdio.h>

// Function to check if the array is sorted (Ascending, Descending, or Not Sorted)
void checkSorted(int arr[], int n) {
    int isAscending = 1, isDescending = 1; // Flags to check order

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isAscending = 0; // If any element is greater than the next, it's not ascending
        }
        if (arr[i] < arr[i + 1]) {
            isDescending = 0; // If any element is smaller than the next, it's not descending
        }
    }

    // Check the flags
    if (isAscending) {
        printf("Sorted\n");
    } else if (isDescending) {
        printf("not Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
}

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];

    // Taking input for the array
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking the sorting order
    checkSorted(arr, size);

    return 0;
}
