// magic number check , ( numbers who's digit add upto 1)
#include <stdio.h>

void magic ( int n )
{
    int a = 0 ; 

    while(a > 9 || a == 0)
    {

    while(n>0)
    {
       a = n%10 + a ; 
       n = n/10;
    }  
    n=a;
    if(a==1)
    {
        printf("the sum is one");
        break;
    }
    else if (a<9 )
    {
        printf("the sum is not one");
       break;
    }
    else if (a>9)  
    {
        a=0;
    }
    
    }
   
}

int main()
{   int a ;
    printf("enter");
    scanf("%d",&a);
    magic(a);
    return 0 ;
}