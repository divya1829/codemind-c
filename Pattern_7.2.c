#include<stdio.h>
int main()

{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i;k++)
        {
            printf(" ");
        }
        for(int j = n;j > i;j--)
        {
            printf("%d ",n-i);
        }
        
        printf("
");
    }
    
}