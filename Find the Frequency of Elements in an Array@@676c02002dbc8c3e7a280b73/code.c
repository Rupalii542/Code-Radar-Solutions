#include <stdio.h>
void findFrequency(int arr[], int size) {
    int visited[size]; 
    for (int i = 0; i < size; i++) {
        visited[i] = 0; 
    }
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) 
            continue;
        int count = 1; 
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; 
            }
        }
        printf("%d %d \n", arr[i], count);
    }
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];0
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    findFrequency(arr, size);
    return 0;
}
