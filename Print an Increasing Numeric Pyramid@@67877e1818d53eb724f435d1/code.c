// Your code here...
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Number of rows in the pyramid
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;
}
