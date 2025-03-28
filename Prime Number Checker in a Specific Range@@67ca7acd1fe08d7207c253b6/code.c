#include<stdio.h>
int isPrime(int num){
    if(num<2){
        return0;
    }
    for(int i=2; i<num; i++){
if(num%i==2){
    return 0;
}
    }
    return 1;
}
else{
    printf("No prime numbes");
}
int printPrimesInRange(int a, int b){
for(int i=a; i<=b; i++){
    printf("%d ",arr[i]);
}
}