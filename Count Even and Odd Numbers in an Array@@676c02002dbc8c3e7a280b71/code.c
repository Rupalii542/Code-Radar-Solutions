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
            // printf("%d",count);
        }
        if(count==0){
            printf("0");
        }
        else{
                sum++;
                // printf("%d", sum);
            }
            if1(sum==0){
                printf("0");
            }
        }
         printf("%d %d",count, sum);
        return 0;
    }