#include<stdio.h>
int main(){
    char ch;
    int n;
    int count=0;
    scanf("%s",&ch);
    for(int i=0;i<n;i++){
if(i=='a' ||i=='e'||i=='o'||i=='i'|| i=='u'){
count++;
}
    }
printf("%d",count);
    return 0;
}