#include <iostream>
using namespace std;

int main() {
    int num, revnum = 0, rem, originalNum;

    cout << "Enter the number: ";
    cin >> num;

    originalNum = num; 

    while (num != 0) {  
        rem = num % 10;  
        revnum = revnum * 10 + rem;  
        num /= 10;  
    }

    if (originalNum == revnum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}
