#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum_odd = 0;
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(i%2!=0) 
        sum_odd+=a[i];
    }
    printf("%d",sum_odd);
    
}