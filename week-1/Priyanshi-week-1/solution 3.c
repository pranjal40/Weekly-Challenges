#include<stdio.h>

    void main(){
        
        int N,b;
        //N = no. of items
        // b = boxes needed
        printf("Total items :");
        scanf("%d",&N);
        
        if(N%10 == 0){
            
            b = N/10 ;
            printf("Full boxes needed : %d",b);
            }
            else{
            b= N/10 +1;
            printf("Full boxes needed : %d",b);
            }
        }
