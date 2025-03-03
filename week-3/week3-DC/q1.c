#include<stdio.h>
int main(){
    int num,x,y=0,z;
    printf("Enter a number:");
    scanf("%d",&num);
    x=num;
    while(num!=0){
        z=num%10;
        y=y*10+z;
        num=num/10;
    }
    if (x==y){
        printf("True");
    }
    else{printf("False");}
    return 0;
}