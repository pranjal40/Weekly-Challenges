#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%s",&str);
    int len=strlen(str); 
    char rev_str[100];
    for(int i=0;i<=len;i++){
        rev_str[i]=str[len-i-1];
    }
    printf("Reversed string:%s",rev_str);
    return 0;  
}