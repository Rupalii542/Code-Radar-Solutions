#include<stdio.h>
int prime(int arr[], int size){
    int count;
    for(int i=2; i<size; i++){
        if(i%i==0){
count ++;
return count;
        }
    }
    return 0;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<size; i++){
        if(prime(int i)){
            pritnf("%d",count);
        }
    }
    return 0;
}