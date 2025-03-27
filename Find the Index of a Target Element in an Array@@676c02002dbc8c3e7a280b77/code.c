#include<stdio.h>
int check(int arr[i],int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            printf("%d", i);
        }
    }
    printf("-1");
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    // printf("%d",check(arr[i],target));
}