#include<stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return n;
    }
    else 
    {
        return n*fact(n-1);
    }
    
}
int main()
{
    int num,sum=0,n;
    printf("Enter a positive number :- ");
    scanf("%d",&num);
    n = num;
    if ( n<0)
    {
        printf("invalid input");
    }
    else
    {
        if(num==1)
        printf("%d is a special number",num);
        else 
        {
            if(num<10)
            printf("%d is not a special number",num);
            else
            {
                while(num>0)
                {
                sum = sum + fact(num%10);
                num = num/10;
                }
                if (sum==n)
    printf("%d is a special number",n);
    else{
        printf("%d is not a special number",n);
    }
            }
        }
    }
    
}