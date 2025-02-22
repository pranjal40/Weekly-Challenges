#include<iostream>
using namespace std;
int main(){
    int first_term,common_ratio,n,k;     //n=no. of terms of series
                                         //k=no. of terms to sum  
    cout<<"Enter the first term:";
    cin>>first_term;

    cout<<"Enter the common ratio:";
    cin>>common_ratio;

    cout<<"Enter the number of terms to be printed:";
    cin>>n;

    cout<<"Enter the number of terms to be summed up:";
    cin>>k;

    int c[n],sum=0;
    c[0]=first_term;

    for(int i=1;i<n;i++){
        int a=1,b;
        c[i]=c[i-1]*common_ratio;
    }
    cout<<"GP:";
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
    for(int i=0;i<k;i++){
        sum=sum+c[i];
    }
    cout<<"\nSum upto "<<k<<"th term:"<<sum<<endl;

    return 0;
}