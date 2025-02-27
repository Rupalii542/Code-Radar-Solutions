#include <stdio.h>

int main() {
    int num, z = 1;  // Initialize z to 1
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        // Print spaces
        for (int j = num - 1; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= z; k++) {
            printf("*");
        }
        z += 2;  // Increase the number of stars
        printf("\n");
    }

    return 0;
}
