int searchInRotatedArray(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;

        // Check if the mid element is the key
        if (arr[mid] == key) {
            return mid;
        }

        // Check if the left half is sorted
        if (arr[low] <= arr[mid]) {
            // The key lies in the sorted left half
            if (arr[low] <= key && key < arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        // If the right half is sorted
        else {
            // The key lies in the sorted right half
            if (arr[mid] < key && key <= arr[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return -1;  // Return -1 if the key is not found
}
