#include<stdio.h>
int check(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);
    
    int result = check(arr, size, target);
    printf("%d\n", result);
    return 0;
}