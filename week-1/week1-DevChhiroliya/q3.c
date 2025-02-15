#include<stdio.h>
int main(){
    int item;
    printf("Enter the total number of items:");
    scanf("%d",&item);
    printf("Total item:%d",item);
    printf("Full boxes needed:%d",item/10);
    int remaining_item=item%10;
    if(remaining_item==0){
        printf("All boxes are fully filled!");
    }
    else{
        printf("Items in the last partially filled box:%d",remaining_item);
    }
    return 0;
}