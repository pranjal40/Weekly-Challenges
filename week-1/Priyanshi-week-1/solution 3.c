#include<stdio.h>

    void main(){
        
        int N,b;
        //N = no. of items
        // b = boxes needed
        printf("Total items :");
        scanf("%d",&N);
        
        if(N >= 0){
            
            b = N/10 + N%10;
            printf("Full boxes needed : %d",b);
            }
        }
