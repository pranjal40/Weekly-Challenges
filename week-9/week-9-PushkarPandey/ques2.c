#include <stdio.h>

int main() {
    int n,i,j,k,l,temp,g,p,a=0,z,r;
    printf("Enter the dimensions of the square DDA :- ");
    scanf("%d",&n);
    int DDA[n][n];
    int arr[n*n];
    
    printf("\nEnter the values in DDA :-\n");
    for(k=0;k<n;k++)
    {
        for(l=0;l<n;l++)
        {
            scanf("%d",&DDA[k][l]);
            arr[a] = DDA[k][l];
            a++;
        }
    }
    
    for(i=0;i<n*n;i++)
    {  
        for(j=i+1;j<n*n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    a = 0;
    for(z=0;z<n;z++)
    {
        for(r=0;r<n;r++)
        {
            DDA[z][r] = arr[a];
            a++;
        }
    }
    
    printf("\nSorted DDA :-\n");
    for(g=0;g<n;g++)
    {
        for(p=0;p<n;p++)
        {
            printf(" %d ",DDA[g][p]);
        }
        printf("\n");
    }
    
}