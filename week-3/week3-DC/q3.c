#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int x=0,y;
    while (y==0){
        y=(num%10);
        x=x+y;
        num=(num/10);
    }
    printf("Sum:%d",x);
    return 0;
}