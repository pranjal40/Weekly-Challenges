#include <stdio.h>

  int palindrome(int num)
  { int rev = 0;
  
     while(num!=0)
     
    { rev = rev * 10 + num % 10;
     num = num/10;}
     return rev;
   }  
     
     int main()
     { 
       int n,b;
       printf("enter a number :- ");
       scanf("%d",&n);
       b= palindrome(n);
       
       if (b == n)
       {printf("true");}
       else
       {printf("false");}
     }