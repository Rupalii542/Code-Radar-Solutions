#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int z = 1; z <= n - i; z++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int z = 1; z <= n - i; z++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
