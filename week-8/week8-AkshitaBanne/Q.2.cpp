#include<iostream>
using namespace std;

int countWays(int n){
    if(n==0||n==1)
    return 0;

    int a=1, b=1 , result;
    for (int i=2;i<=n;++i)  {
        result = a+b;
        a=b;
        b=result;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    cout << "Number of ways you can  reach the " << n << "th stair: " << countWays(n) << endl;
    return 0;
}