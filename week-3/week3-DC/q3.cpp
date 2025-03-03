#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int x=0,y;
    while (y==0){
        y=num%10;
        x=x+y;
        num=num/10;
    }
    cout<<"Sum:"<<x<<endl;
    return 0;
}