#include <stdio.h>
int main()
{
    int n, r, sum = 0, t;
    printf("Enter the number :");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    n = t;
    if (n == sum)
    {
        printf("True");
    }
    else
        printf("False");
    return 0;
}