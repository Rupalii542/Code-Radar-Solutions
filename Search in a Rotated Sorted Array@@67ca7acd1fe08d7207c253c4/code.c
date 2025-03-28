#include<stdio.h>
int searchInRotatedArray(int arr[], int size, int key){
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        for(int i=0; i<n; i++){
        if(arr[i]==key){
            printf("%d",i);
        }
        if(arr[mid]<key){
            printf("%d",i);
        }
        else{
            printf("%d",i);
        }
    }
    return -1;
}
}