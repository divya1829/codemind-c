#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    scanf("%[^
]",str);
    printf("%d",strlen(str));
}