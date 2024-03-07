#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=3*n;i++){
        if(i%3==0){
            printf("%d ",i);
        }
    }
}