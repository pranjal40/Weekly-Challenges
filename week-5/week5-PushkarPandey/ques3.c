#include<stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter the desired heigth of the pyramid :- ");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
    for(k=0;k<=n-i-1;k++)
    { printf(" "); }
    for(j=1;j<=2*i-1;j++)
    { printf("#");}
    printf("\n");
    }
}