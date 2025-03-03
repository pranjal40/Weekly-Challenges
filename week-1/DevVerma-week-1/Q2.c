#include <stdio.h>

int main(){

    int amount;

    printf("Enter the amount to withdraw (multiples of 100): ");
    scanf("%d", &amount);


    int check = amount%100;

if(check !=0){

    printf("\nInvalid amount! Please enter a multiple of 100 only.\n");
}

else{

    printf("Withdrawal Successful! You will receive: \n");

   int notes_500 = amount/500;
   int rem_500 = amount % 500;
   int notes_200 = rem_500/200;
   int rem_200 = rem_500%200;
   int notes_100 = rem_200/100;


printf("500 notes: %d\n200 notes: %d\n100 notes: %d\n", notes_500,notes_200,notes_100);




}
return 0;

}