#include<iostream>
#include<algorithm>
#include<cctype>
#include<set>

using namespace std ;

string toLower(const string  &str ){
     string result = str ;
     for(char &c:result) c= tolower(c);
     return result;
    }

    string toUpper(const string &str ){
        string result = str ;
        for(char &c:result) c= toupper(c);
        return result;
       }

       bool hasRepeats(const string &str){
        set<char> seen;
        for ( char c : str)
        {
            if(seen.count(c)) return true;
            seen . insert(c);
        }

        return false;
       }


       int main(){
        string word;
        cout<<"enter a word"<<endl;
        cin>>word;

        word = toLower(word);
        sort(word.begin(), word.end());
    
        if (hasRepeats(word)){
            cout<<toUpper(word)<<endl;
            
        }
        else{
            cout<<word<<endl;
        }

        return 0;
       }