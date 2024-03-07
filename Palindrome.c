#include<stdio.h>
int main(){
    int n,i=0;
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        i=i*10+(n%10);
        n/=10;
    }
    if(i==temp){
        printf("True");
    }
    else{
        printf("False");
    }
}