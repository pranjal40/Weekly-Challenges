#include<iostream>
#include<string>
using namespace std;
int main(){
    string sen;
    cout<<"Enter a string:";
    getline(cin,sen);
    int len=sen.length();
    string rev_sen;
    for(int i=0;i<len;i++){
        rev_sen[i]=sen[len-i-1];
    }
    cout<<"Reversed string:"<<rev_sen;
    return 0;    
}