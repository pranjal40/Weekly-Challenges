#include<stdio.h>
int main(){
    int first_term,common_ratio,n,k;     //n=no. of terms of series
                                         //k=no. of terms to sum  
    printf("Enter the first term:");
    scanf("%d",&first_term);

    printf("Enter the common ratio:");
    scanf("%d",&common_ratio);

    printf("Enter the number of terms to be printed:");
    scanf("%d",&n);

    printf("Enter the number of terms to be summed up:");
    scanf("%d",&k);

    int c[n],sum=0;
    c[0]=first_term;

    for(int i=1;i<n;i++){
        int a=1,b;
        c[i]=c[i-1]*common_ratio;
    }
    printf("GP:");
    for(int i=0;i<n;i++){
        printf("%d ",c[i]);
    }
    for(int i=0;i<k;i++){
        sum=sum+c[i];
    }
    printf("\nSum upto %dth term:%d",k,sum);

    return 0;
}