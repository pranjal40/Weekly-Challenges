#include <stdio.h>

int main()
{
    int N,  remain;
    printf("enter the total number of items");
    scanf("%d", &N);
    printf("Total items : %d\n", N );
    if (N % 10 == 0)
    {
        printf(" Full boxes needed : %d\n All boxes are fully filled! ", N / 10);
    }
    else{
        printf("Full boxes needed: %d \nItems in the last partially filled box: %d", N/10 , N % 10);
    }
    return 0;
}