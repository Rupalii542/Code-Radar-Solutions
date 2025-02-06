#include <stdio.h>
int main(){
    int n, l, b;
    float a,p;
    scanf("%d %d %d", &n, &l, &b);
    a=l*b;
    p=2*(l+b);
    printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",n,a,p);
    return 0;
}