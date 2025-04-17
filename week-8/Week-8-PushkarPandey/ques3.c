#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,i,j,k=0,l;
    printf("Enter number of walls :- ");
    scanf("%d",&n);
    int arr[n];
    
    printf("\nEnter heights of the respective walls :- ");
    for(l=0;l<n;l++)
    {
        scanf("%d",&arr[l]);
    }
    
    for(i=0;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
           if(arr[i]<arr[j])
           {
               if(arr[i]*(j-i)>k)
               {
                 k = arr[i]*(j-i);           
               }
           }
           if(arr[j]<arr[i])
           {
               if(arr[j]*(i-j)>k)
               {
                   k = arr[j]*(i-j);
               }
            }
        }
    }    
    printf("\nMax volume of inside any two walls is :- %d units",k);
}