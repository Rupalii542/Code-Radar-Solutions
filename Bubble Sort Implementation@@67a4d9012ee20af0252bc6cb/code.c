#include<stdio.h>
void bubbleSort(int arr, int n){
    for(int p=0; p<n-1; p++){
        for(int c=0; c<n-p-1; c++){
            if(arr[c]>arr[c+1]){
                int temp=arr[c];
                arr[c]=arr[c+1];
                arr[c+1]=temp;
            }
        }
        
    }
}