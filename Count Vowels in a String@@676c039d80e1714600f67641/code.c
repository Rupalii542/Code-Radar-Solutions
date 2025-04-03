#include<stdio.h>
int main(){
    char ch[20];
    int n;
    int count=0;
    scanf("%s",&ch);
    for(int i=0;i<ch[i];i++){
if(i=='a' ||i=='e'||i=='o'||i=='i'|| i=='u'||i=='A' ||i=='E'||i=='I'||i=='O'|| i=='U' ){
count++;
}
    }
printf("%d",count);
    return 0;
}