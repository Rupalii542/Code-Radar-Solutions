#include <stdio.h>
#include <limits.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];

    // Taking array input
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN, smax = INT_MIN;

    // Find the maximum element
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Find the second maximum element
    for (int i = 0; i < size; i++) {
        if (arr[i] != max && arr[i] > smax) {
            smax = arr[i];
        }
    }

    // If no second max found, return -1
    if (smax == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", smax);
    }

    return 0;
}
