#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int b= 0;
    int oddeven[n];
    for(int i = 0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0) {
            oddeven[b] = a[i];
            b++;
        }
    }
    
    for(int i = 0;i<n;i++) {
        if(a[i] % 2 != 0) {
            oddeven[b] = a[i];
            b++;
        }
        printf("%d ",oddeven[i]);
    }
    
}