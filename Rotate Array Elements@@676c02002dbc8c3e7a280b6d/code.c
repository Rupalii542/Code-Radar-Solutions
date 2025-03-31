// #include<stdio.h>
// void reverse(int arr[], int start, int end){
//     while(start<end){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
// }
// void rotation(int arr[], int n, int k){
//     k%=n;
//     reverse(arr,0,n-k-1);
//     reverse(arr,n-k,n-1);
//     reverse(arr, 0, n-1);
// }
// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }
// int main() {
//     int n, k;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
// scanf("%d", &k);
//     rotation(arr, n, k);
//     printArray(arr, n);
//     return 0;
// }

#include<stdio.h>
void reverse(int arr[], int start, int end){
while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
}
void rotation(int arr[], int n, int k){
    k=k%n;
    reverse(arr,0,k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
}
int printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotation(arr, n, k);
    printArray(arr,n);
    return 0;
}