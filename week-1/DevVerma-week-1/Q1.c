#include <stdio.h>

int main(){

    int item,qty,pre_bill;


    printf("*Welcome*\n");
    printf("What would you like to have? \n");
    printf("1.Pizza : 150 \n2.Burger : 80 \n3.Hotdog : 50\n");
    printf("Please enter your choice(1/2/3): ");
    scanf(" %d", &item);
    printf("\nQuantity:");
    scanf("%d",&qty);
    int rate[3] = {150,80,50};

    pre_bill = qty*rate[item-1];

if(pre_bill>200){

float new_bill = pre_bill*0.9;

printf("\nYour total bill is: %.2f\n", new_bill);

}
 
else{

    printf("Your total bill is: %d\n", pre_bill);

}

printf("Thank you, Visit Again!");

return 0;

}