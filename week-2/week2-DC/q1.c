#include<stdio.h>
int main(){
    int due_date;
    printf("Enter the number of days after the due date:");
    scanf("%d",&due_date);
    if(due_date!=0){
        if (due_date<=7){
            printf("Fine to be paid:%d",due_date*5);
        }
        else{
            int penalty;
            penalty=35+(due_date-7)*10;
            printf("Fine before penalty:%d\n",penalty);
            if(penalty>100){
                printf("Final Fine after 10 penalty:%f",penalty*1.1);
            }
        }
    }
    else{
        printf("No fine");
    }
    return 0;
}