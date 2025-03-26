#include <math.h>
#include <stdio.h>
int main()
{
    int a, r, n, m, i, gp, sum;
    printf("Enter the first term:");
    scanf("%d", &a);
    printf(" Enter the common ratio :");
    scanf("%d", &r);
    printf("Enter the number of terms to be printed : ");
    scanf("%d", &n);
    printf("Enter the number of terms to be summed up:");
    scanf("%d", &m);
    printf(" The G.P : ");
    for (i = 0; i < n; i++)
    {
        gp = a * pow(r, i);
        printf("%d  ", gp);
    }
    sum = (a * (pow(r, m) - 1) / (r - 1));
    printf("\nThe sum : %d", sum);
    return 0;
}