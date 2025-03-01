#include <stdio.h>
int main() {
    char ch='A';
    scanf("%c", &ch);  
    for (char i = 'A'; i <= ch; i++) {  
        for (char j = 'A'; j <= i; j++) {  
            printf("%c ", ch++);  
        }
        printf("\n");  
    }
    return 0;
}