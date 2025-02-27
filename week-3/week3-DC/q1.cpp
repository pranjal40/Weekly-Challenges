#include<iostream>
using namespace std;
int main(){
    int num,x,y=0,z;
    cout<<"Enter a number:";
    cin>>num;
    x=num;
    while(num!=0){
        z=num%10;
        y=y*10+z;
        num=num/10;
    }
    if (x==y){cout<<"True";}
    else{cout<<"False";}
    return 0;
}