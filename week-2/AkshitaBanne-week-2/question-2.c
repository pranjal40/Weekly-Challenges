#include<stdio.h>
int main()
{
    int count =0 ,i;
    char str[50];
    printf("enter a string :");
    fgets(str, sizeof(str), stdin);
    //scanf("%s",&i);
    

    for( i=0; str[i] !='\0'; i++ )
    {
        if(str[i]==' ')
        {
            count++;                                                                                                                    
        }
    }

    printf("the space count is :%d\n",count);
    
return 0;
    
}
