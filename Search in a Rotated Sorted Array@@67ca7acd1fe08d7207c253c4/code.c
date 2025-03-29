#include<stdio.h>
int searchInRotatedArray(int arr[], int n, int key){
    int low=0; 
    int high=n-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            if(arr[low]<=key  &&  key<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[high]>=key  && key>arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}