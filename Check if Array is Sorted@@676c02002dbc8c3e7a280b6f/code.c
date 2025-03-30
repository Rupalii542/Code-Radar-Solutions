#include <stdio.h>
void checkSorted(int arr[], int n) {
    int isAscending = 1, isDescending = 1; 
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isAscending = 0; 
        }
        if (arr[i] < arr[i + 1]) {
            isDescending = 0; 
        }
    }
    if (isAscending) {
        printf("Sorted\n");
    } else if (isDescending) {
        printf("Not Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    checkSorted(arr, size);
    return 0;
}
