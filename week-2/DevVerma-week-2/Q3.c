#include <stdio.h>
#include <math.h>

void main(){

int a,r,t,ts;

printf("\nEnter the first term: ");
scanf("%d",&a);

printf("\nEnter the common ratio: ");
scanf("%d",&r);

printf("\nEnter the number of terms to be printed: ");
scanf("%d",&t);

printf("\nEnter the number of terms to be summed up: ");
scanf("%d",&ts);

int term,sum,sum1,b;

printf("GP: ");
for(int i = 1; i<=t;i++)
{
    b=pow(r,i-1);
        term = a*b;
    printf(" %d, ",term);
}



    int pwr=pow(r,ts);
    sum=(a*(pwr-1))/(r-1);


printf("\nSum upto nth term: %d",sum);



}