#include <stdio.h>

int main() {
    int i,j,k,l,m,n,num;
    printf("Height of the pyramid  :- ");
    scanf("%d",&num);
     
    for(i=0;i<=num;i++)
    {
        for(k=0;k<=num-i-1;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i+1;j++)
        {
            printf("%d",i-j+2);
        }
        for(l=1;l<=i;l++)
        {
            printf("%d",l+1);
        }
        printf("\n");
    }
}