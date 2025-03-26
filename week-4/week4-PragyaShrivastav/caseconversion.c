#include<stdio.h>
#include<string.h>
int main(){

int i=0;
char b[50];// string

char chose;//choser is for inputing desired cases
    printf("enter the word you want to convert:");
    fgets(b,sizeof(b),stdin);
    printf("enter the case you want");
    scanf("%c",&chose);
if(chose=='l'|| chose=='L'){
    for(i=0;b[i]!='\0';i++){
    if(!(b[i]>='a' && b[i]<='z')){
        if(b[i]!='\n'){
      b[i]=b[i]+32;
    }}
    }
printf("the string in lowercase is %s",b);
}

else if(chose=='u'|| chose=='U'){
    //uppercase to lower case
    for(i=0;b[i]!='\0';i++){
    if(!(b[i]>='A' &&b[i]<='Z')){
        if(b[i]!='\n'){  
        b[i]=b[i]-32;
    }}
    }
    printf("the string in uppercase is:%s",b);

    }
    return 0;
}

