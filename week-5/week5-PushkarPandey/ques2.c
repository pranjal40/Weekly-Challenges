#include<stdio.h>
#include<math.h>
int main()
    {   
        int n,i,num,deno;
        printf("Enter the number of terms :- ");
        scanf("%d",&n);
        
        if (n>0)
        {
        for (i = 1;i <= n;i++)
        {
        num =pow(-1,i+1)*(2+3*(i-1));
        deno = 7 + 4*(i-1);
        printf("%d/%d ",num,deno);
        }
        }
        else{
            printf("Invalid Input");
        }
    }