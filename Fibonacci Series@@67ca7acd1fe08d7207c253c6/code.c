#include<stdio.h>
void fibonacciSeries(int num){
    int a=0, b=1, c;
    if(num==1){
        printf("%d ",a);
        return;
    }
printf("%d %d ", a, b);
for(int i=2; i<num; i++){
c=a+b;
printf("%d ", c);
a=b; 
b=c;
}
}