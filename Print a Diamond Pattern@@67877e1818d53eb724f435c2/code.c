#include <stdio.h>
int main() {
    int n;
    printf("Enter an odd number: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }
    int spaces, stars;
    for (int i = 1; i <= n; i += 2) {
        spaces = (n - i) / 2;
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < i; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 2; i >= 1; i -= 2) {
        spaces = (n - i) / 2;
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
