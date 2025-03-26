#include <stdio.h>

int BinConv( int n )
{
    if (n==0)
    {
        return 0;
    }
    else{
        int k = n%2 + 10*BinConv(n/2);
        return k;
    }
}    
int main()
{
    int dec,binary;
    printf("Enter a Decimal Number :- ");
    scanf("%d",&dec);
    binary = BinConv(dec);
    printf("\nThe binary conversion of %d is %d",dec,binary);
}