#include <stdio.h>
int main(){
    int m,t,w,th,f,s,su,avg;
    scanf("%d %d %d %d %d %d %d",&m, &t, &w, &th, &f, &s, &su);
    avg=m+t+w+th+f+s+su;
    printf("Average Temperature: %.2f",avg);
    return 0;
}