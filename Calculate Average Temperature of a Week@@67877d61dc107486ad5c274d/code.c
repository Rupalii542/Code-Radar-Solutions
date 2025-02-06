#include <stdio.h>
int main() {
    int m,t,w,th,f,s,su;
    float avg;
    scanf("%d %d %d %d %d %d %d", &m, &t, &w, &th, &f, &s, &su);
    avg =  (m+t+w+th+f+s+su)/7;
    printf("Average Temperature: %.2f\n", avg);
    return 0;
}
