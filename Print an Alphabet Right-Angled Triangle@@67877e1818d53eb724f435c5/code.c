// Your code here...
#include<stdio.h>
int main(){
    char ch;
    scanf(" %c",ch);
    for(char i=0; i<ch; i++){
        for(char j=0; j=i; j++){
            printf(" %c ", j-1);
        }
        printf("\n");
    }
    return 0;
}