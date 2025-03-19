#include<iostream>
using namespace std;
int main (){
int ht;//ht=height;
cout<<"enter the height of pyramid";
cin>>ht;
for(int i=1;i<=ht;i++){
    for(int k=0;k<ht-i;k++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}