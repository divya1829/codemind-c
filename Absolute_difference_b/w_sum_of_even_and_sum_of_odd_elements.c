#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int odd_sum = 0 , even_sum = 0;
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        even_sum+=arr[i];
        else 
        odd_sum+=arr[i];
    }
    int diff = abs(odd_sum - even_sum);
    printf("%d",diff);
}