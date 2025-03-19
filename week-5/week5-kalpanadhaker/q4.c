#include <stdio.h>
int main()
{
    int h, i, j, k;
    printf("Enter the desired height of pyramid: ");
    scanf("%d", &h);
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= 2 * h - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}