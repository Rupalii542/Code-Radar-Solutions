#include<stdio.h>
int isPrime(int num){
    if(num<2){
        return 0;
    }
for(int i=2; i< num; i++){
    if(num%i==0){
        printf("0\n");
    }
}
printf("1\n") ;
}