#include<stdio.h>

    void main(){
    
        enum order{pizza=1,burger,hotdog};
        enum order code;
        
        int tot, q;
        printf("Enter the item code:");
        scanf("%d",&code);
        printf("enter quantity: ");
        scanf("%d",&q);
        
        if(code ==1){
        tot = 150*q;
        }
        else if(code == 2){
        tot = 80*q;
        }
        else if(code == 3){
        tot = 50*q;
        }
        if(tot>200){
        tot = tot -(tot*0.1);
        }
        printf("The total amount to be paid is %d",tot);    
        }
