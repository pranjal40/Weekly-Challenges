#include<stdio.h>
int main()
{
    int store,n,r,fact,i,result;
    printf("enter the value of n:");
    scanf("%d",&n);
    store=n;
    result=0;
    fact=1;
    while(store!=0){
    r=store%10;
    for(i=1;i<=r;i++){
        fact=fact*i;
    }
    result=result+fact;
    fact=1;
    store=store/10;}
    if(result==n){
        printf("the number is special character");
    }
    else{
        printf("the number is not a special character");
    }
    
    

    return 0;
    
}