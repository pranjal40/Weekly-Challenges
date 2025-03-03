#include<stdio.h>
 
//Smallest number of notes required to combine to give rs. N
    void main()
    {
    int notes[]={500,200,100};
    int N,i,j,k;
    
    printf("Enter the amount to be withdrawn (N) :",N);
    scanf("%d",&N);
    
    if(N%100 == 0){
     i = N/notes[0];
     j = N%(notes[0])/200;
     k= N%(notes[0])%2;
     printf("withdrawal successful! You will receive:\n Rs.500 notes:%d\n Rs.200 notes:%d\n Rs.100 notes:%d\n",i,j,k);
     }
     else{
     printf("Invalid amount! please enter a multiple of 100");}
    }