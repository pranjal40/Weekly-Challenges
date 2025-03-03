#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double firstTerm,commonratio,term,sum=0;
       int n,notoprint;

    cout<<"enter first no of gp :\n";
    cin>>firstTerm;

    cout<<"enter the common ratio:\n";
    cin>>commonratio;

   cout <<"enter the value of n (till the sum is to be done):\n";
    cin>>n;

    cout<<"enter the no to print:\n";
    cin>>notoprint;

    cout << "\nThe first " << notoprint<< " terms of the Geometric Progression are:\n";


    for (int i = 0; i < notoprint; i++) 
    {
        term = firstTerm * pow(commonratio, i);
        cout << term << " ";

        cout << "\n\nThe sum of the first " << n << " terms is: ";

    }

    if (commonratio == 1)
     {
        sum = firstTerm * n; 
     } 

    else
     {
        sum = firstTerm * (1 - pow(commonratio, n)) / (1 - commonratio);
     }

    cout<<sum<<endl;


    return 0;


}
