//question-1
#include<iostream>
using namespace std;
int main (){
int i;
cout<<"enter the required number for the item you want"<<endl;//1-pizza;2-burger;3-hotdog
cin>> i;
float qty1=0,qty2=0,qty3=0;//for knowing the quantity of the item qty1= pizza;qty2= burger;qty3=hotdog
float pizza=0,burger=0,hotdog=0;
if(i==1){
    cin>> qty1;
    pizza=qty1*150;
}
else if (i==2){
    cin>> qty2;
    burger=qty2*80;
}
else if(i==3){
    cin>> qty3;
    hotdog=qty3*50;
}
else{
    cout<<"item is not in menu";
}
float bill=pizza+burger+hotdog;
if(bill>200){
    bill=bill-0.1*bill;
    cout<< bill;
}
else{
    cout<<bill;
}
return 0;
}