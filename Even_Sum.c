#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],sum = 0;
    for(int i = 0;i < n;i++) {
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0)
        sum+=a[i];
    }
    
    printf("%d",sum);
}