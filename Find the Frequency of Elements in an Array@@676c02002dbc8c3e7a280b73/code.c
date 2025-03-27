#include <stdio.h>
void count(int arr[], int size) {
    int freq[10] = {}; 
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    for (int i = 0; i < size; i++) {
        if (freq[arr[i]] != 0) {
            printf("%d %d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0; 
        }
    }
}
int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    count(arr, size); 
    return 0;
}