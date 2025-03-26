#include<stdio.h>
int main()
{
int a,b,c,d,e;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);
printf("the number submitted by the users are\n %d\n%d\n%d\n%d\n%d",a,b,c,d,e);
float x;
x= (a+b+c+d+e)/5;

printf("the average of the provivded numbers is: %d",x);
 return 0;
}