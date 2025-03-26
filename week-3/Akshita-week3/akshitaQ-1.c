#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    printf("enter no /name: \n");
    scanf("%s",a);
    strcpy(b,a);
    strrev(b);

    if (strcmp(a,b)==0)
    {
        printf("PALINDROME !!\n");
    }

    else
    {
        printf("NOT PALINDROME!!");
    }

    return 0;
}


