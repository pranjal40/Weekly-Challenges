#include<iostream>
using namespace std;
int main(){
    int withdraw;
    cout<<"Welcome\nEnters the amount to withdraw:";
    cin>>withdraw;
    int fivehun=withdraw/500;
    int k=withdraw-fivehun*500;
    int twohun=k/200;
    int l=k-twohun*200;
    int onehun=l/100;
    if (withdraw%100==0){
        cout<<"Withdrawal Successful! You will receive:\n₹500 notes:"<<fivehun<<"\n₹200 notes:"<<twohun<<"\n₹100 notes:"<<onehun<<endl;
    }
    else{
        cout<<"Invalid amount! Please enter a multiple of 100.";
    }
    return 0;
}