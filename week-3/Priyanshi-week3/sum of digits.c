#include<stdio.h>
//sum of digits of any positive  no.
//a is the input number by the user

    void main()
    {
    int a,sum=0,n;
    
    printf("Enter a number a ",a);
    scanf("%d",&a);
    
    while(a>0)
    {
    n=a%10;
    sum=sum+n;
    a=a/10;
    }
    printf("The sum of the digits is %d",sum);
    }