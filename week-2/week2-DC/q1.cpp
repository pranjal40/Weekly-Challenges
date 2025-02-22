#include<iostream>
using namespace std;
int main(){
    int due_date;
    cout<<"Enter the number of days after the due date:";
    cin>>due_date;
    if(due_date!=0){
        if (due_date<=7){
            cout<<"Fine to be paid:"<<due_date*5<<endl;
        }
        else{
            int penalty;
            penalty=35+(due_date-7)*10;
            cout<<"Fine before penalty:\n"<<penalty<<endl;
            if(penalty>100){
                cout<<"Final Fine after 10 penalty:"<<penalty*1.1<<endl;
            }
        }
    }
    else{
        cout<<"No fine";
    }
    return 0;
}