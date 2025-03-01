#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    for(int i = 1; i <= n; i++) { 
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int j = 1; j <= (2 * i - 1); j++) { 
            if (i == 1) {
                printf("1");
            } else {
                printf("1");
                for (int k = 1; k < 2 * (i - 1); k++) {
                    printf("%d", n);
                }
                printf("1");
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
