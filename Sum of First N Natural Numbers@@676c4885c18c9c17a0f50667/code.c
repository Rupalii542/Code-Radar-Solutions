// #include <stdio.h>
// int main(){
//     int a,i,sum=0;
//     scanf("%d", &a);
//     for (i=1; i<=a; i++){
//         sum+=i;
//     }
//         printf("%d", sum);
    
//     return 0;
// }
#include<stdio.h>
int main(){
    int num, sum=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        printf("%d",i);
        sum+=i;
    }
    return 0;
}