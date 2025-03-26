#include<stdio.h> 

int main(){ 
    int number;
    int reversed;
    reversed = 0;
 scanf("%d",& number);
    printf("enter the number to be checked %d\n",number);


    // number ko paltana
    int rem;
    while(number != 0){
        rem = number % 10;
        reversed = reversed * 10 + rem;
        number = number/10;

    }
    if 
        (reversed == number)
        printf(" the provided number is a pallendrome");

    else
        printf(" it is not a pallendrome number");

    return 0;
    }