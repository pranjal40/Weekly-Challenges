#include<iostream>
using namespace std;
int main (){
int N;//N here is the no. of items inputted by user
cout<<"enter the number of items"<<endl;
cin>>N;
int ff;// ff = fully filled box
int rem=0;
  ff=N/10;
  rem=N%10;
  //rem provides the no. of items in the last partially filled box
  int total=0;//represent total no. of boxes
  if(rem!=0){
    total=ff+1;
    cout<<"the total boxes is is:"<<total<<endl;
    cout<<"the no. of items in a partially filled box is"<<rem<<endl;
  }
  else{
    total=ff;
    cout<<"all the boxes are fully filled and the total is:"<<total<<endl;
  }
return 0;
}