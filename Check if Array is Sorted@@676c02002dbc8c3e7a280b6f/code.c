#include<stdio.h>
void sort(int arr[], int n){
    for(int p=0;p<n-1; p++){
        for(int c=0;c<n-p-1;c++){
            if(arr[c]>arr[c+1]){
                int temp=arr[c];
                arr[c]=arr[c+1];
                arr[c+1]=temp;
            }
        }
    }
}
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
scanf("%d",&arr[i]);
    }
    if (isSorted(arr, size)) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }
    return 0;
}