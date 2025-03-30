#include<stdio.h>
int sort(int arr[], int size){
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
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
scanf("%d",&arr[i]);
    }
    if(sort(arr[i])){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}