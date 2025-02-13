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
    int a, count = 0, i;
    scanf("%d", &a);

    for(i = 1; i <= a; i++) {
        if(a % i == 0)
            count++;//it will check if number of divisors
    }
    if(count == 2)
        printf("Prime\n");
    else
        printf("Not prime\n");
    return 0;
}