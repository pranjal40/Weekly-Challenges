#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%c",&str);
    int k=strlen(str);
    printf("%d",k);
    return 0;
}