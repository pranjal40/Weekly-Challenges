#include <stdio.h>

int main(){

int items;

printf("Enter the total number of items: ");
scanf("%d", &items);

 int full = items/10;
 int left = items%10;

 if(left ==0){


    printf("Total items: %d\nFull boxes needed: %d\nAll boxes are fully filled! \n", items,full);


 }
else{

printf("Total items: %d\nFull boxes needed: %d\nItems in the last partially filled box: %d\n",items,full,left);


}





return 0;

}