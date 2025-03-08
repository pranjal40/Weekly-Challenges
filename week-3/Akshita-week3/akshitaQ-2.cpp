#include<bits/stdc++.h>
using namespace std ;
string s;
int main(){
    //string s;
   printf("enter a string : \n");
    scanf("%s",&s);

    reverse(s.begin(),s.end());

    cout<<s;
    return 0;
}