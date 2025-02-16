// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num==1){
        printf("*");
    }
    else if(num==2){
        printf("* \n* *");
    }
    else if(num==3){
        printf("*\n* *\n* * *");
    }
    else if(num==4){
        printf("*\n* *\n* * *\n* * * *");
    }
    else if(num==5){
        printf("*\n* *\n* * *\n* * * *\n* * * * *");
    }
    else if(num==6){
        printf("*\n* *\n* * *\n* * * *\n* * * * *\n* * * * * *");
    }
    else if(num==7){
        printf("*\n* *\n* * *\n* * * *\n* * * * *\n* * * * * * *\n* * * * * *");
    }
    return 0;
}