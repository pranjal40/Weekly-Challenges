#include<iostream>
#include<string>
using namespace std;
int main(){
    string sen;
    cout<<"Enter the string:"<<endl;
    getline(cin,sen);
    int len=sen.length();
    int count=0;
    for(int i=0;i<len;i++){
        if(sen ==" "){
            count++;
        }
    }
    cout<<"Number of spaces in the string:"<<count;

}