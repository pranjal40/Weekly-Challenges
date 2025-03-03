#include <stdio.h>
#include <string.h>


char* strrev( char* str )
{
    int a =0 ,c;
    char b;
    c = strlen(str) - 1;
    
    while(a<c)
    {
        b = str[a];
        str[a] = str[c];
        str[c] = b;
        a++;
        c--;
    }
    printf("the entered string in reversed is :- %s",str);
}
int main()
{   char* str;
    printf("Please enter a string\n");
    scanf("%s",str);
    strrev(str);
    return 0;
}