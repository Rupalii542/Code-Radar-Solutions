#include<stdio.h>
int isPrime(int num){
for(int i=0; i<num; i++){
if(num<2){
    return 0;
}
if(num%i==0){
    return 0;
}
}
return 1;
}