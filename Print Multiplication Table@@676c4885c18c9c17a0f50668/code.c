// #include <stdio.h>
// int main(){
//     int i,n;
//     scanf("%d", &n);
//     for (i=1; i<=10; i++){
//     printf("%d * %d = %d\n", n , i , n*i );
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num; i++){
        printf("%d * %d = %d",num, i, num*i);
    }
    return 0;
}