#include<stdio.h>
#include<string.h>
int main() {
    char str1[1000];
    scanf("%s",str1);
    char str2[1000];
    scanf("%s",str2);
    int a = strcmp(str1,str2);
    if(a == 0) 
    printf("Strings are Equal");
    else 
    printf("Strings are not Equal");}