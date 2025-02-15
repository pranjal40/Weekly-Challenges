#include<iostream>
using namespace std;
int main(){
    int pizza=150,burger=80,hotdog=50;
    cout<<"Welcome everybody\nWhat would you like to order\n1.Pizza=150\n2.Burger=80\n3.Hotdog=50\n";
    cout<<"If you order more than 200 rupees than 10% discount is avail";
    int k;
    cin>>k;
    if(k==1){
        int m,total;
        cout<<"How many pizza you want to buy?\n";
        cin>>m;
        total=m*pizza;
        if(total<200){
            cout<<"Total amount:"<<total<<endl;
        }
        else{
            cout<<"Total amount:"<<total*0.9<<endl;
        }
    }
    else if(k==2){
        int m,total;
        cout<<"How many burger you want to buy?\n";
        cin>>m;
        total=m*burger;
        if(total<200){
            cout<<"Total amount:"<<total<<endl;
        }
        else{
            cout<<"Total amount:"<<total*0.9<<endl;
        }
    }
    else if(k==3){
        int m,total;
        cout<<"How many hotdog you want to buy?\n";
        cin>>m;
        total=m*hotdog;
        if(total<200){
            cout<<"Total amount:"<<total<<endl;
        }
        else{
            cout<<"Total amount:"<<total*0.9<<endl;
        }
    }
    else{
        cout<<"Wrong Input";
    }
    cout<<"ThankYou for Visiting Us";
}