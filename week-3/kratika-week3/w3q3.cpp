#include<iostream>
using namespace std;
int main (){
    int n,rem,sum=0;
    cout<<"enter the number";
    cin>>n;
    while(n!=0){
       rem= n%10;
       sum=sum+rem;
       n=n/10;
        }

    cout<< "the sum is"<< sum;

return 0;
}