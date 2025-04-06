#include<stdio.h>
int bubbleSort(char arr[], int n){
    for(int p=0; p<n-1; p++){
        for(int c=0; c<n-p-1; c++){
            if(arr[c]<arr[c+1]){
                char temp=arr[c];
                arr[c]=arr[c+1];
                arr[c+1]=temp;
            }
        }
    }
}
int printArray(char arr[], int  n){
    for(int i=0; i<n;i++){
        printf("%c",arr[i]);
    }
}