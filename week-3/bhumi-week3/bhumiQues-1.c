#include<stdio.h>
int main(){
    int num,temp,rem,newNum;
    printf("enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        rem=temp%10;
        newNum=rem+(newNum*10);
        temp=temp/10;
    }
    if(newNum==num){
        printf("%d is a palindrome number",num);
    }
    else{
        printf("%d is not a palindrome number",num);
    }
    return 0;
}