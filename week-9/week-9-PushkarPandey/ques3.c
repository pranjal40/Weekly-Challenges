#include <stdio.h>
#include <math.h>

int main() {
    int num,n,count=0,sqr,half1,half2,sqr2;
   printf("Enter the number which is to be checked :- ");
   scanf("%d",&num);
   
   n = num;
   sqr = n*n;
   sqr2=sqr;
   
   while(sqr2!=0)
   {
       sqr2=sqr2/10;
       count++;
   }
   
   int divisor1 = pow(10,(count/2));
   int divisor2 = pow(10,((count/2))+2);
   
   if(count%2==0)
   {
       half2=sqr%divisor1;
       half1=sqr/divisor1;
   }
   else{
       half2=sqr%divisor2;
       half1=sqr/divisor1;
   }
   
   if(half1 + half2 == n)
   {
       printf("%d is a kaprekar number",num);
   }
   else{
       printf("%d is not a kaprekar number",num);
   }
}