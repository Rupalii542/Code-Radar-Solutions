#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    for(int i = 0; i <= n; i++) {
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int j = 0; j <= (2 * i - 1); j++) {
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;
}
