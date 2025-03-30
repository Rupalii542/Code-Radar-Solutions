#include <stdio.h>
#include <limits.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];  
    printf("%d", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN, smax = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] != max && smax < arr[i]) {
            smax = arr[i];
        }
    }
    // if (smax == INT_MIN) {
    //     printf("%d",smax);
    // } else {
        printf("%d", smax);
    // }
    return 0;
}
