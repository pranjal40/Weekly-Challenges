#include<stdio.h>
#include<string.h>
int main(){
    char sen[100];
    printf("Enter a string:");
    fgets(sen,sizeof(sen),stdin);
    int len_of_sen=strlen(sen);
    int count=0;
    for(int i=0;i<len_of_sen;i++){
        if (sen[i]==" "){
            count++;
        }
    }
    printf("Number of spaces in the string:%d",count);
    return 0;
}