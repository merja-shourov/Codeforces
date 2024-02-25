#include<bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    cin >> s;

    string hel = "hello";

    int i,j;
    for( i=0, j=0; i<s.size(); i++ ){
        if( s[i] == hel[j] ) j++;
        if( j==5){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    
    return 0;
}