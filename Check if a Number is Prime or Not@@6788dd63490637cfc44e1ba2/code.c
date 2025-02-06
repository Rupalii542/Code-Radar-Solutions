#include<stdio.h>
int main(){
    int n, i, flag;
    scanf("%d", &n);
    if(n<2){
        printf("Not Prime\n");
        return 0;
    }
    for (i=2; i<n; i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if (flag==0)
    printf("Prime\n");
    else
    printf("Not Prime\n");
    return 0;
}