#include<stdio.h>
int main(){
    int num;
    int count=0;
    scanf("%d",&num);
    for(int i=0; i<num; i++){
        for(int j=1; j<=i+1; j++){
            printf("%d", num);
        }
        printf("\n");
        count++;
    }
    return 0;
}