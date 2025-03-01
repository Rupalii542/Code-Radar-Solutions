// Your code here...
#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i;j++){
            printf("%d ", num);
            count++;
        }
        printf("\n");
    }
    return 0;
}