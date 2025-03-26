#include <math.h>
#include <stdio.h>
int main()
{
    int n, i,sign,numerator,denomenator;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
       sign =  pow(-1, (i+1));
       numerator = (3*i)-1;
       numerator = sign * numerator;
       denomenator= (4*i)+3;
        printf("%d/%d ", numerator ,denomenator );
    }
    return 0;
}