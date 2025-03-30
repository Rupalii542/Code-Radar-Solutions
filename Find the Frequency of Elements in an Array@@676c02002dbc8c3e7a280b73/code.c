#include <stdio.h>

void findFrequency(int arr[], int size) {
    int visited[size]; // Array to mark counted elements
    for (int i = 0; i < size; i++) {
        visited[i] = 0; // Initialize all as not counted
    }

    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) // Skip already counted elements
            continue;

        int count = 1; // Count occurrences of arr[i]
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicate as counted
            }
        }

        printf("%d\n", arr[i], count);
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, size);

    return 0;
}
