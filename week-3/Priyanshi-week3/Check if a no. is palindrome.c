#include<stdio.h>

//To check whether a number is palindrome or not
// num is a random number
// rev is reverse of num
void main()
{
    int num,rev=0,n,x;
    
    printf("Enter a number : ",num);
    scanf("%d",&num);
    x = num;
    
    while (num >0){
    
    n = num%10;
    rev = rev*10 + n;
    num = num/10;
    }
    
    if (x == rev){
    printf("The number is a palindrome.");}
    
    else printf("It is not a palindrome. ");
}