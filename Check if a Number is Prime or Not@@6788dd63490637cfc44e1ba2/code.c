/*#include<stdio.h>
int main(){
    int n, i, flag;
    scanf("%d", &n);
    if(n<2){
        printf("Not Prime\n");
        return 0;
    }
    for (i=2; i<n; i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if (flag==0)
    printf("Prime\n");
    else
    printf("Not Prime\n");
    return 0;
}
*/
#include <stdio.h>

int main() {
    int num, i = 2;
    scanf("%d", &num);
    if (num <= 1) {
        printf("Not Prime");
    } 
    else {
        int is_prime = 1;
        while (i <= num / 2) {
            if (num % i == 0) {
               is_prime = 0;
               break;
            }
            i++;
        }
        if(is_prime){
            printf("Prime");
        } else {
            printf("Not Prime");
        }
    }  
    return 0;
}
