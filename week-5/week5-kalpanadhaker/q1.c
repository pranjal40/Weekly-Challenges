#include <stdio.h>
int main()
{
    int i, n, t,r, fact = 1, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        r = n % 10;
        fact =1;
        {
            for (i = 1; i <= r; i++)
            {
                fact = fact * i;
            }
        }
        sum = fact + sum;
        n = n / 10;
    }
    n =t;
    if (n == sum)
    {
        printf("%d is a special number", n);
    }
    else
    {
        printf("%d is not a special number", n);
    }
    return 0;
}