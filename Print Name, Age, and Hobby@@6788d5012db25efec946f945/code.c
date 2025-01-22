#include <stdio.h>
int main(){
    char a,c;
    int b;
    scanf("%s,%s", &a, &c);
    scanf("%d",&b);
    printf("Name: %s\n",a);
    printf("Age: %d\n", b);
    printf("Hobby: %s\n", c);
    return 0;
}