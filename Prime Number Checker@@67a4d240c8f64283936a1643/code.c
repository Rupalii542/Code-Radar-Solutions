#include<stdio.h>
int prime(int num){
for(int i=0; i<input; i++){
    if(num%i==0){
        return 1;
    }
    else{
        return 0;
    }
}
return 0;
}
int main(){
int input;
scanf("%d",&input);
int num;
for(int i=0; i<input; i++){
scanf("%d", &num);
}
for(int i=0; i<input; i++){
    if(prime(i)){
        printf("1 ");
    }
    else{
        printf("0 ");
    }
}
return 0;
}