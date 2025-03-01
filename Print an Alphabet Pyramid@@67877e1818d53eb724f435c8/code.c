// Your code here...
#include<stdio.h>
int main(){
    int num;
    char ch;
    ch='A';
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i+1;j++){
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}