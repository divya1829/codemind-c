#include<stdio.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++) 
    {
        for(int j = 0;j<m;j++) 
        {
            scanf("%d",&arr[i][j]);
        }
    }
   int a=0;
    for(int k=0;k<m;k++)
    {
        int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i][a];
    }
      a++;
    printf("%d ",sum);
    }
}