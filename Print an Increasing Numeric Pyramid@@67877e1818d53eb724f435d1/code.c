#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces for center alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers in the row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
