#include <stdio.h>
int main(){
    int i,n;
    scnaf("%d", &n);
    for (i=1; i<=10; i++){
    printf("n * i = %d\n", n*i );
    }
    return 0;
}