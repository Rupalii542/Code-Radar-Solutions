#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            printf("%d", i);
        }
    }
    else
{
    printf("-1");
}
}