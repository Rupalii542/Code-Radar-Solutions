// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     for(int i=0; i<num; i++){
//         for(int j=0; j<num-i; j++){
//             printf("* ");
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
        for(int j=0;j<i+2;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}