#include <stdio.h>

int main()
{
    int amount, remain;
    printf("enter the amount");
    scanf("%d", &amount);
    if (amount % 100 == 0)
    {
        printf("Withdrawal Successful!! You will recieve :");
        printf("Rs 500 notes : %d ", amount / 500);
        remain = amount % 500;
        printf("Rs 200 notes : %d", remain / 200);
        remain = remain % 200;
        printf("Rs 100 notes : %d", remain / 100);
    }
    else
    {
        printf("Invalid amount! Please enter a multiple of 100");
    }
    return 0;
}