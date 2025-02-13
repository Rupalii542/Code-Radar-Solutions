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
#include<stdio.h>
int main(){
    int a,i=2;
    int prime=1;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
        else{
        while(i<=a/2){
            //int prime=1;
if(a%i==0){
    prime=0;
    break;
}
i++;
        }
        if (prime==1)
{
    printf("Prime");
}      
else{
    printf("Not Prime");
}  }
    }
}