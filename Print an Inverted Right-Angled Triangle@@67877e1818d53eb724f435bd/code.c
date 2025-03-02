// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}