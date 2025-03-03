#include<stdio.h>
int main()
{
    int pizza=150,burger=80,hotdog=50;
    printf("Welcome everybody\nWhat would you like to order\n1.Pizza=150\n2.Burger=80\n3.Hotdog=50\n");
    printf("If you order more than 200 rupees than 10% discount is avail");
    int k;
    scanf("%d",&k);
    if(k==1){
        int m,total;
        printf("How many pizza you want to buy?\n");
        scanf("%d",&m);
        total=m*pizza;
        if(total<200){
            printf("Total amount:%d",total);
        }
        else{
            printf("Total amount:%f",total*0.9);
        }
    }
    else if(k==2){
        int m,total;
        printf("How many burger you want to buy?\n");
        scanf("%d",&m);
        total=m*burger;
        if(total<200){
            printf("Total amount:%d",total);
        }
        else{
            printf("Total amount:%f",total*0.9);
        }
    }
    else if(k==3){
        int m,total;
        printf("How many hotdog you want to buy?\n");
        scanf("%d",&m);
        total=m*hotdog;
        if(total<200){
            printf("Total amount:%d",total);
        }
        else{
            printf("Total amount:%f",total*0.9);
        }
    }
    else{
        printf("Wrong Input");
    }
    printf("ThankYou for Visiting Us");
    return 0;
}