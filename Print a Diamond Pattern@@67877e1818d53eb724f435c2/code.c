#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper part of diamond
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) printf(" "); // Spaces
        for (int j = 0; j < i; j++) printf("*"); // Stars
        printf("\n");
    }

    // Lower part of diamond
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) printf(" "); // Spaces
        for (int j = 0; j < i; j++) printf("*"); // Stars
        printf("\n");
    }

    return 0;
}
