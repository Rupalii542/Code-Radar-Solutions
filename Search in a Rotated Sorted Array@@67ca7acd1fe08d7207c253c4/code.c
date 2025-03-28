int searchInRotatedArray(int arr[], int n, int key){
    int low=0, high=size-1, mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=key && key<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<key && arr[high]>=key){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}