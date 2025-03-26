#include<iostream>
using namespace std;
int factorial(int i);
int main (){
    int n,num;
    int fact=1,f=0;
    int org;//org=original number
    cout<<"enter the number";
    cin>>n;
    org=n;
    while(n>0){
        num=n%10;
        n=n/10;
        f=f+factorial(num);
    }
    if(f==org){
        cout<<"the number is special number";
    }
    else{
        cout<<"not a special number";
    }
return 0;
}
int factorial(int i){
    int fact=1;
    int num;
    for(int j=1;j<=i;j++){
        fact=fact*j;
    }
    return fact;

}