#include <stdio.h>
int main()
{
  int num,sum=0,n;
  printf("enter a number n :- ");
  scanf("%d",&num);
  while(num>=10)
  {
     sum  = sum + num%10;
     num = num/10;
  }  
  printf("sum of the digits of the number n is %d",sum+num); 
}