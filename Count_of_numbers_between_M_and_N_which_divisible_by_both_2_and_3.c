#include<stdio.h>
int main(){
    int n,m;
    int cnt=0;
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++){
        if(i%2==0 && i%3==0){
            cnt++;
        }
    }
    printf("%d ",cnt);
}