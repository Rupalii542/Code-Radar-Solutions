#include <stdio.h>

void runningSum(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        arr[i] += arr[i - 1];  
    }
}

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    runningSum(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
