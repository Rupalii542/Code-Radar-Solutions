#include <stdio.h>
int main(){
    int num, roll;
    double marks;
    char name[20];
    scanf("%d",&num);
    scanf("%d",&roll);
    scanf("%s",&name);
    scanf("%lf",&marks);
    printf("Roll Number: %d, Name: %s, Marks: %.2lf",roll,name, marks);
    return 0;
}