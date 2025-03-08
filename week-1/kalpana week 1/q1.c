#include <stdio.h>

int main()
{
    int choice, quantity;
    float price, DP, total_price;
    printf("Enter the item choice\n 1 : Pizza\n 2 : Burger\n 3 : Hotdog\n ");
    scanf("%d", &choice);
    printf("Enter the Quantity\n");
    scanf("%d", &quantity);
    if (choice == 1)
    {
        price = 150 * quantity;
    }
    else if (choice == 2)
    {
        price = 80 * quantity;
    }
    else if (choice == 3)
    {
        price = 50 * quantity;
    }
    printf("The price is Rs.%f", price);
    if (price > 200)
    {
        DP = (price * 10) / 100; // DP is discount price
        total_price = price - DP;
        printf("\nThe grand total is Rs%f", total_price);
    }
    return 0;
}