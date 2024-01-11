#include<bits/stdc++.h>
using namespace std;

int main(void){

    string s; cin >> s;
    string zero = ".";
    string one = "-.";
    string two = "--";

    for( int i=0; i<s.length()- two.length() + 1; i++ ){
        if( s.substr(i, two.length()) == two ){
            s.replace(i, two.length(), "2");
        }
    }

    for( int i=0; i<s.length()- one.length() + 1; i++ ){
        if( s.substr(i, one.length()) == one ){
            s.replace(i, one.length(), "1");
        }
    }

    for( int i=0; i<s.length()- zero.length() + 1; i++ ){
        if( s.substr(i, zero.length()) == zero ){
            s.replace(i, zero.length(), "0");
        }
    }

    cout << s << endl;
    return 0;
}