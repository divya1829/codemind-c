#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=0;
    while(n--){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}