#include<stdio.h>
int main(){
    int withdraw;
    printf("Welcome\nEnters the amount to withdraw:");
    scanf("%d",&withdraw);
    int fivehun=withdraw/500;
    int k=withdraw-fivehun*500;
    int twohun=k/200;
    int l=k-twohun*200;
    int onehun=l/100;
    if (withdraw%100==0){
        printf("Withdrawal Successful! You will receive:\n₹500 notes:%d\n₹200 notes:%d\n₹100 notes:%d",fivehun,twohun,onehun);
    }
    else{
        printf("Invalid amount! Please enter a multiple of 100.");
    }
    return 0;
}