int binarySearch(int arr[], int size, int key){
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if (arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}