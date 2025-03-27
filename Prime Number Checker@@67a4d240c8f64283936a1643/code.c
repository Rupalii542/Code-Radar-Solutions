#include<stdio.h>
int prime(int num){
    if(num<2){
        return 0;
    }
for(int i=0; i<input; i++){
    if(num%i==0){
        return 0;
    }
}
return 1;
}
int main(){
int input;
scanf("%d",&input);
int num;
for(int i=0; i<input; i++){
scanf("%d", &num);
}
for(int i=0; i<input; i++){
    if(prime(num)){
        printf("1 ");
    }
    else{
        printf("0 ");
    }
}
return 0;
}