#include<stdio.h>
int prime(int num){
    if(num<2)return 0;
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=0; i<size; i++){
        if(prime(arr[i])){
            count++;
            // printf("%d ", arr[i]);
        }
    }
    printf("%d ",count);
    return 0;
}