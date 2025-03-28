#include<stdio.h>
int fibonacci(int n){
    if(n<=0)
    return -1;
if (n==1)
return 0;
if(n==2)
return 1;
int a=0, b=1, fib, i;
for(i=3;i<=n;i++){
fib=a+b;
a=b;
b=fib;
}
return b;
}
int main(){
    int n;
    scanf("%d",&n);
    int result=fibonacci(n);
    printf("%d",result);
    return 0;
}