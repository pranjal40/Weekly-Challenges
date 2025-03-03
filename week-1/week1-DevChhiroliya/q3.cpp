#include<iostream>
using namespace std;
int main(){
    int item;
    cout<<"Enter the total number of items:";
    cin>>item;
    cout<<"Total item:"<<item<<endl;
    cout<<"Full boxes needed:"<<item/10<<endl;
    int remaining_item=item%10;
    if(remaining_item==0){
        cout<<"All boxes are fully filled!";
    }
    else{
        cout<<"Items in the last partially filled box:"<<remaining_item<<endl;
    }
    return 0;
}