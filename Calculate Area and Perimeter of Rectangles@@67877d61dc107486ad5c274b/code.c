/*#include <stdio.h>
int main(){
    int n, l, b;
    float a,p;
    scanf("%d %d %d", &n, &l, &b);
    a=l*b;
    p=2*(l+b);
    printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",n,a,p);
    return 0;
}*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        int l,b;
        float a,p;
        scanf("%d %d",&l, &b);
        a=l*b;
        p=2*(l+b);
        printf("Rectangle %d: Area = %.2f, Perimeter = $.2f\n", i, a, p);
    }
    return 0;
}