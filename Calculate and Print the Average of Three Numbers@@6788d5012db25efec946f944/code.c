#include <stdio.h>
int main(){
    int a,b,c;
    float d;
    scanf("%d %d %d", &a, &b, &c);
    c=a+b+c;
    printf("Average: %.2f", c/3);
    return 0;
}