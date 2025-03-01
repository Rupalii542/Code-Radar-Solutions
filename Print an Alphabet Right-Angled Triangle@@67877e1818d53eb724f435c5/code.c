#include <stdio.h>

int main() {
    char inputChar;
    scanf("%c", &Ch);

    for (char i = 'A'; i <= Ch; i++) {
        for (char j = 'A'; j <= i; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}
