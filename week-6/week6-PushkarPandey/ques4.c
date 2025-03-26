#include <stdio.h>

int main() {
    int i,j,k,h,num=1;
    printf("Enter the desired height of the pyramid :- ");
    scanf("%d",&h);
    
    for(i=0;i<h;i++)
    {
        for(j=0;j<=h-i-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=1+2*i;k++)
        {
            printf(" %d",num);
            num++;
        }
        printf("\n");
    }
}