#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        if(n*i%m==0){
            printf("%d",n*m/(n*i));
            break;
        }
    }
}