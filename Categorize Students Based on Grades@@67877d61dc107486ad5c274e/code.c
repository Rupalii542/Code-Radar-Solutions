// Your code here...
#include<stdio.h>
int main(){
    int roll;
    float marks;
    char name[50]; 
    scanf("%d ", &roll);
    scanf("%f", &marks);
    scanf(" %s", name);
    if(marks>=85.0){
        grade =='A';
    }
    else if(marks<85.0 && marks>=70.0){
        grade=='B';
    }
    else{
        grade='c';
    }
    printf("Roll number: %d, Name: %s, Grade:\n", roll, name, grade);
    return 0;
}