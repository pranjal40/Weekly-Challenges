#include <stdio.h>
int main()
{
    int a, i, j, k;
    printf("Enter the desired hight : ");
    scanf("%d", &a);
    for (i = a; i >= 1; i--)
    {
        for (j = i; j > 1; j--)
        {
            printf(" ");
        }
        for (k = a; k >= i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}