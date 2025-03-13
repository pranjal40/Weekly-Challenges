#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[50];
    printf("enter the string you want to print:");
    fgets(str,sizeof(str),stdin);

    for( i=0;str[i]!='\0';i++){
        if (str[i]=='\n'){//removes a new line character//
            str[i]=='\0';
            break;
        }
        if(str[i]==' '){
            printf("\n");

        }
        else{
            printf("%c",str[i]);
        }
    }
    return 0;


}
