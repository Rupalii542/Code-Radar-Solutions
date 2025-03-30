#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
    for(int i = 1; i <= n; i++) { 
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            if (i == 2 && j > 1) {
                printf("1"); 
                break;
            } else {
                printf("%d", j);
            }
        }
        if (i == 2) {
            printf("1"); 
        } else {
            for(int j = i - 1; j >= 1; j--) {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}