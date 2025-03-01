#include <stdio.h>

int main() {
    char inputChar;
    // printf("Enter an uppercase letter: ");
    scanf("%c", &inputChar);

    for (char i = 'A'; i <= inputChar; i++) {
        for (char j = 'A'; j <= i; j++) {
            printf("%d ", j);  // Print the ASCII value
        }
        printf("\n");
    }
    return 0;
}
