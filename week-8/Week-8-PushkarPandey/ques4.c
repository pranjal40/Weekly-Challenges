#include <stdio.h>

int fact(int a)
{
    int f;
    if(a==1 || a==0)
    {
        return 1;
    }
    else
    {
        f=a*fact(a-1);
        return f;
    }
}
int main() {
    int n,i,j,f;
    int count=0;
    printf("Enter the last stair :- ");
    scanf("%d",&n);
    for(i=0;i<=n/2;i++)
    {
        for(j=0;j<=n;j++)
        {
            if((2*i) + j == n)
            {
                count = count + (fact(i+j)) / (fact(i)*fact(j));
            }
        }
    }
    printf("\nThe number of ways to reach the nth stair is :- %d",count);
}