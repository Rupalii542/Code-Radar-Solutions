#include <stdio.h>
int main(){
    char a[10],c[10];
    int b;
    scanf("%s,%s", &a, &c);
    scanf("%d",&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n", b);
    printf("Hobby: %s\n", c);
    return 0;
}