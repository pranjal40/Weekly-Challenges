#include <stdio.h>

int main(){


    int days;
    float bill;
printf("Welcome to gitcord Library!\n");

printf("Enter the number of days for which the book is borrowed: ");
scanf("%d",&days);

if(days<=7){

    bill = 5*days;
    printf("\nThe book return is overdued,\nFine to be payed: %.2f\n",bill);
}

if(days>7){


    bill = 7*5+(days-7)*10;
    


    if(bill<100){
    printf("\nThe book return is overdued,\nFine to be payed: %.2f\n");
    }

    if(bill>100){

        printf("\nThe book return is overdued,\nFine before penalty: %.2f\n",bill);


        bill=bill*1.1;
        printf("Final Fine after 10%% penalty: %.2f",bill);



    }
}



return 0;


}