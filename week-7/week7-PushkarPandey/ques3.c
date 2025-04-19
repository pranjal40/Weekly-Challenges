#include <stdio.h>

int main() {
    int num,i=0,j,k,l,m,n,count=0;
    int arr[5];
    printf("Enter the number for which the sum is to be found: ");
    scanf("%d",&num);
    
    printf("Enter a array of five numbers such that no two numbers are the same :- ");
    while (i<=4)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    
    for(j=0;j<=4;j++)
    {
        for(k=j+1;k<=4;k++)
        {
            if (arr[j]==arr[k])
            {
                printf("Invalid Input ");
            }
            else
            {
                 if(arr[k] + arr[l] == num)
                {
                   printf("Two number whose sum is %d are %d and %d",num,arr[k],arr[l]);
                }
            }
        }
    }
}    
