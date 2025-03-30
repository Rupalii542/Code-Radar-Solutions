#include<stdio.h>
int main(){
    int size;
    scanf("%s",&size);
    int arr[];
    for(int i=0; i<size; i++){
        scanf("%d ",&arr[i]);
    }
    int max=arr[0], min=arr[0];
    for(int i=0; i<size; i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d  %d ", max, min);
    return 0;
}