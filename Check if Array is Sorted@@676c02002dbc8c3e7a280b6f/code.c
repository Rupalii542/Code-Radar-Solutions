#include<stdio.h>
void sort(int arr[], int n){
    int ascending=1;
    int descending=1;
    for(int i=0;i<n-1; i++){
        if(arr[i]>arr[i+1]){
            ascending=0;
        }
        if(arr[i]<arr[i+1]){
            descending=0;
        }
    }
    if(ascending){
        printf("Sorted");
    }
    else if(descending){
        printf("Not Sorted");
    }
    else{
        printf("Not Sorted");
    }
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
    sort(arr, size);
    return 0;
}