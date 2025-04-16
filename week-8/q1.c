#include<stdio.h>
int main (){
int A[]={5,2,9,1,5,6};
int n=5;//n= length of array 
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(A[j]>A[j+1]){
            int temp=A[j+1];
            A[j+1]=A[j];
            A[j]=temp;
        }
    }
}
printf("output:[");
for(int k=0;k<=n;k++){
printf("%d",A[k]);
if(k!=n){
    printf(",");
}
}
printf("]");

return 0;
}