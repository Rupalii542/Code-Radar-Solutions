#include<stdio.h>
int main(){
    int num, count=1;
    scanf("%d",&num);
    for(int i=0; i<num;i++){
        for(int j=num-1; j>i; j--){
printf(" ");
        }
        for(int k=1; k<=count; k++){
            printf("*");
        }
        count+=2;
        printf("\n");
    }
    return 0;
}