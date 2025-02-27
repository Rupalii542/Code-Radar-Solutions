// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     if(num==2){
//         printf("**\n**");
//     }
//     else if(num==3){
//         printf("***\n* *\n***");
//     }
//     else if(num==4){
//         printf("****\n*  *\n*  *\n****");
//     }
//     else if(num==5){
//         printf("*****\n*   *\n*   *\n*   *\n*****");
//     }
//     else if(num==6){
//         printf("******\n*    *\n*    *\n*    *\n*    *\n******");
//     }
//     else if(num==7){
//         printf("*******\n*     *\n*     *\n*     *\n*     *\n*     *\n*******");
//     }
// else{
//     printf("********\n*      *\n*      *\n*      *\n*      *\n*      *\n*      *\n********");
// }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n;j++){
            if(i==1|| i==4 || j==1|| j==4){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}