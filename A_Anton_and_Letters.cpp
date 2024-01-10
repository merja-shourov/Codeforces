#include<bits/stdc++.h>
using namespace std;

int main(void){
    string str;
    getline(cin, str);

    set<char> v;
    for( int i=0; str[i] != '\0'; i++ ){
        if( str[i] >='a' && str[i] <= 'z' ){
            v.insert(str[i]);
        }
    }

    cout << v.size() << endl;
    return 0;
}