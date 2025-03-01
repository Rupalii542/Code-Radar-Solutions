#include<stdio.h>
int main(){
    int num;
    char ch;
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        ch='A';
        for(int j=0; j<i; j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}