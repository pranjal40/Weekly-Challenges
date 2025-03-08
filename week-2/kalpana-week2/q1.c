#include <stdio.h>

int main()
{
    int days ;
    float fine, penalty;
    printf("enterer the number of days after the due date :");
    scanf("%d", &days);
    if (days < 7)
    {
        fine = days * 5;
        printf("Fine to be paid : %f", fine);
    }
    else

    {
        fine = ((days - 7) * 10) + 35 ;
       if (fine > 100)
        {
            printf("Fine before penalty : %f", fine);
            penalty = fine * 0.1;
            printf("Fine after penalty : %f", fine + penalty);
        }
    }

    return 0;
}