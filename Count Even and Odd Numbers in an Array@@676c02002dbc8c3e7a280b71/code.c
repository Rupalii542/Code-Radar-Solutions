#include<stdio.h>
int main(){
    int count=0;
    int sum=0;
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<size; i++){
        if(i%2==0){
            count++;
        }
        else{
                sum++;
            }
        }
         printf("%d %d",count, sum);
        return 0;
    }