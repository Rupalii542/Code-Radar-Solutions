#include<stdio.h>
#include<stdlib.h>
int sumDigits(int num){
    int sum=0;
    num=abs(num);
    while(num>0){
       int rem= num%10;
sum+=rem;
num/=10;
    }
    return sum;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
for(int i=0; i<size; i++){
    int result=sumDigits(arr[i]);
    printf("%d ",result);
}
return 0;
}