#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num==2){
        printf("**\n**");
    }
    else if(num==3){
        printf("***\n* *\n***");
    }
    else if(num==4){
        printf("****\n*  *\n*  *\n****");
    }
    else if(num==5){
        printf("*****\n*   *\n*   *\n*   *\n*****");
    }
    return 0;
}