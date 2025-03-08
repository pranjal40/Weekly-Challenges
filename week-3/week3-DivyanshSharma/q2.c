#include<stdio.h> 
#include<string.h>
int main(){
    char s[20];
     printf("enter the desired string");
    scanf("%s\n",& s);
   int i,l;
    l = strlen(s);
    char backup; //for contaning the backup string while reversing 
    for( i=0; i <=l/2 ; i++){
         backup = s[i];
        s[i] = s[l-1-i];
        s[l-1-i] = backup;

    }
    printf("\n the reversed string is %s",s);


    return 0;
    }