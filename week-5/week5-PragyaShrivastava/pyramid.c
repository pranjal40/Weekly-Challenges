#include<stdio.h>
int main()
{
    int h, i, j;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &h);
    for (i = 1; i <= h; i++)
    {
        for (j = 1; j <= 2*h- 1; j++) 
        {
            if (j >= h - (i - 1) && j <= h + (i - 1)) 
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); 
    }
    return 0;
}

