#include <iostream>
#include <cctype> 
#include <string>

using namespace std;

int main() {
    string str;
    string uppercase, lowercase;

    
    cout << "Enter a string: ";
    getline(cin, str);

    
    for (char ch : str) {
        if (isupper(ch)) 
        {
            uppercase += ch;  
        } 

        else if (islower(ch))
        {
            lowercase += ch;  
        }
    }

   
    cout << "Uppercase - " << uppercase << endl;
    cout << "Lowercase - " << lowercase << endl;

    return 0;
}