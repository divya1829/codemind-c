#include<stdio.h>
int main(){
    int n;
    int sum=0;
    float avg=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
        avg=float (sum)/n;
        printf("%.2f ",avg);
    
}