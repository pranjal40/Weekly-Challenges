
#include<iostream>
using namespace std;
int main (){
int amt;// amt is taken as a amount to be inputted by the user
cout<<"enter the amount you have to withdraw from bank"<<endl;//bank withdraw money in notes of 500,200 and 100 respectively
cin>> amt;
int rem1=0,rem2=0,rem3=0;
int N5=0,N2=0,N1=0;
int total=0;//total represents total no. of notes
if(amt%100==0){
    //condition of successful transition
N5=amt/500;//N5 is no. of notes of rupees 500 
rem1=amt%500;
N2=rem1/200;//N2 is no. of notes of rupees 200
rem2=rem1%200;
N1=rem2/100;//rem3 is no. of notes of rupees 100
total=N5+N2+N1;
cout<< total<<endl;
cout<<"no. of notes of 500 rupee"<<N5<<endl;
cout<<"no. of notes of 200 rupee"<<N2<<endl;
cout<<"no. of notes of 100 rupee"<<N1<<endl;
}
else{
    cout<<"transaction is being declined"<<endl;
}

return 0;
}