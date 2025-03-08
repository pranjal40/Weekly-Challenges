#include <stdio.h>

int main()
{
    int n,i,count=0;
    printf(" please enter a number :- ");
    scanf("%d",&n);
    if (n<=1)
    { 
        printf("it is not a prime number");
    }
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
if (count>2)
{
    printf("\nit is not a prime number ");  
}
else {printf("it is a prime number");}
}