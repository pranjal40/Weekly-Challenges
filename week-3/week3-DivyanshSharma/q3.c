#include<stdio.h> 

int main(){ 
    int sankhya;
    printf(" the number to be summed up\n");
    scanf("%d",& sankhya);

    int yogfal;
    yogfal =0;

    int antimaank;
    while( sankhya != 0){
        antimaank = sankhya %10;
        yogfal= yogfal + antimaank;
        sankhya = sankhya/10;
    } 
    printf(" di gyi sankhya ke aantarik anko ka yogfal %d hai",yogfal);

    return 0;
    }