#include <stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if(a=='a','e','i','o','u','A','E','I','O','U')
    printf("Vowel");
    else if(!(a=='a','e','i','o','u','A','E','I','O','U'))
    printf("Consonant");
    else if (a=='!','@','#','$','%','^','&','*','(',')')
    printf("Special character");
    else if(a=='1','2','3','4','5','6','7','8','9','0')
    printf("Digit");
    else
    printf("Consonant");
    return 0;
}