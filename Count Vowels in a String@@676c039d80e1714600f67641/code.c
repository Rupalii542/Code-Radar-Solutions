#include<stdio.h>
int main(){
    char ch;
    int n;
    int count=0;
    scanf("%ds",&ch);
    for(int i=0;i<n;i++){
if(i=='a' ||i=='e'||i=='o'||i=='i'|| i=='u'){
count++;
}
    }
    return count;
}